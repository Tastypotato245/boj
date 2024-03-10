// https://www.acmicpc.net/problem/1012

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	T;
int	M;
int N;
int K;

void Dfs(int y, int x, int arr[][51])
{
	if (y < 0 || y >= N || x < 0 || x >= M || arr[y][x] == 0 || arr[y][x] == 2)
		return ;
  	arr[y][x] = 2;
	Dfs(y - 1, x, arr);
	Dfs(y + 1, x, arr);
	Dfs(y, x - 1, arr);
	Dfs(y, x + 1, arr);
}

void Solve()
{
	cin >> T;
	for (int t = 0; t < T; ++t)
	{
		cin >> M;
		cin >> N;
		cin >> K;

		int cnt = 0;
		int arr[51][51] = {0, };
		pair<int, int> tmp;
		vector<pair<int, int> > v(K);

		for (int i = 0 ; i < K ; ++i)
		{
			cin >> tmp.second >> tmp.first;
			v[i] = tmp;
			arr[tmp.first][tmp.second] = 1;
		}
		for (int i = 0 ; i < K ; ++i)
		{
			if (arr[v[i].first][v[i].second] == 2)
				continue ;
			else
				++cnt;
			Dfs(v[i].first, v[i].second, arr);
		}
		cout << cnt << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
