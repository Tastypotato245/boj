// https://www.acmicpc.net/problem/15686

#include <iostream>
#include <algorithm>
#include <vector>

#define MAX_N 50
#define MAX_M 13

using namespace std;

int	N;
int M;
int	ans;
vector<pair<int, int> > home;
vector<pair<int, int> > chicken;
vector<pair<int, int> > new_chicken;

void Input()
{
	int i, j, tmp;

	cin >> N;
	cin >> M;
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			cin >> tmp;
			if (tmp == 1)
				home.push_back({i , j});
			if (tmp == 2)
				chicken.push_back({i , j});
		}
	}
}

void Cal()
{
	int tmp_ans = 0;
	int	i, j, tmp;

	for (i = 0; i < home.size(); ++i)
	{
		tmp = 0;
		for (j = 0; j < new_chicken.size(); ++j)
		{
			if (tmp == 0)
				tmp = 	abs(home[i].first - new_chicken[j].first) + 
					abs(home[i].second - new_chicken[j].second);
			else
				tmp = min(tmp, 	abs(home[i].first - new_chicken[j].first) +
						abs(home[i].second - new_chicken[j].second));
		}
		tmp_ans += tmp;
	}
	if (ans == 0)
		ans = tmp_ans;
	else
		ans = min(ans, tmp_ans);
}

void Solve(int len, int pos)
{
	if (len == M)
	{
		Cal();
		return ;
	}
	while (pos < chicken.size())
	{
		new_chicken.push_back(chicken[pos]);
		Solve(len + 1, pos + 1);
		new_chicken.pop_back();
		++pos;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve(0, 0);
	cout << ans << "\n";
	return (0);
}
