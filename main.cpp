// https://www.acmicpc.net/problem/1238
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <cmath>
#define INT_INF 1000000000

using namespace std;

int	N, M, X;
int path[1001][1001];
void Solve()
{
	cin >> N >> M >> X;
	int a, b;
	for (int i = 1 ; i <= N ; ++i)
		fill(path[i] + 1, path[i] + N + 1, INT_INF);
	for (int i = 1 ; i <= M ; ++i)
		cin >> a >> b >> path[a][b];
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= N ; ++j)
			for (int k = 1 ; k <= N ; ++k)
				path[i][j] = min(path[i][j], path[i][k] + path[k][j]);
	cout << *max_element(path[0] + 1, path[0] + N + 1) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
