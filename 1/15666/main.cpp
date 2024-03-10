// https://www.acmicpc.net/problem/15666

#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 8

using namespace std;

int	N = 0; // pos
int	M = 0; // len
vector<int> v;
vector<int> vp(MAX);

void Input()
{
	int tmp;
	cin >> N;
	cin >> M;
	for (int i = 0; i < N; ++i)
	{
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
}

void Solve(int len, int pos)
{
	int last = 0;

	if (len == M)
	{
		for (int i = 0; i < M; ++i) cout << vp[i] << " " ;
		cout << "\n";
		return ;
	}
	for (; pos < N ; ++pos)
	{
		if (v[pos] == last)
			continue ;
		vp[len] = v[pos];
		last = v[pos];
		Solve(len + 1, pos);
	}
	vp[len] = 0;
}


int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve(0, 0);
	return (0);
}
