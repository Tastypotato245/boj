// https://www.acmicpc.net/problem/1238
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <cmath>
#define INT_INF 1000000001

using namespace std;

int	N, M, X;
int path[1001][1001];
void Solve()
{
	cin >> N >> M >> X;
	int a, b;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= N ; ++j)
		{
			if (i == j)
				continue ;
			path[i][j] = INT_INF;
		}

	for (int i = 1 ; i <= M ; ++i)
		cin >> a >> b >> path[a][b];

	for (int k = 1 ; k <= N ; ++k)
		for (int i = 1 ; i <= N ; ++i)
			for (int j = 1 ; j <= N ; ++j)
				path[i][j] = min(path[i][j], path[i][k] + path[k][j]);

	for (int i = 1 ; i <= N ; ++i)
		path[0][i] = path[i][X] + path[X][i];
	cout << *max_element(path[0] + 1, path[0] + N + 1) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
