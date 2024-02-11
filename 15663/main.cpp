// https://www.acmicpc.net/problem/15663

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int	M;
vector<int> vec;
vector<int> ans_vec(8);
vector<int> chk_vec(8);

void Input()
{
	int i = -1;
	int	tmp;
	cin >> N;
	cin >> M;
	while (++i < N)
	{
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
}

void Output()
{
	int i = -1;
	while (++i < M)	cout << ans_vec[i] << " ";
	cout << "\n";
}

void Solve(int len)
{
	int	pos = 0;

	if (len == M)
	{
		Output();
		return ;
	}
	while (pos < N)
	{
		if (chk_vec[pos] == 1 || (ans_vec[len] == vec[pos]))
		{
			++pos;
			continue ;
		}
		ans_vec[len] = vec[pos];
		chk_vec[pos] = 1;
		Solve(len + 1);
		chk_vec[pos] = 0;
		++pos;
	}
	ans_vec[len] = 0;
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve(0);
	return (0);
}
