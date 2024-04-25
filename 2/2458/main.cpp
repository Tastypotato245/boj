// https://www.acmicpc.net/problem/2458
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;

int dis[501][501];

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < M; ++i)
	{
		int a, b;
		cin >> a >> b;
		dis[a][b] = 1;
		++dis[0][a];
		++dis[0][b];
	}
	for (int k = 1 ; k <= N ; ++k)
		for (int i = 1 ; i <= N ; ++i)
			for (int j = 1 ; j <= N ; ++j)
				if (dis[i][j] == 0 && dis[i][k] != 0 && dis[k][j] != 0)
					dis[i][j] = 1;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= N ; ++j)
			if (i != j && dis[i][j] != 0)
			{
				dis[0][i]++;
				dis[0][j]++;
			}
	int cnt = 0;
	for (int i = 1 ; i <= N; ++i)
		if (dis[0][i] == N - 1)
			++cnt;
	cout << cnt << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
