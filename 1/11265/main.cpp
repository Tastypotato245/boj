// https://www.acmicpc.net/problem/11265
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#define INF 1000000000

using namespace std;

int	N, M;
int path[501][501];

void Solve()
{
	cin >> N >> M;

	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= N ; ++j)
			cin >> path[i][j];

	for (int k = 1 ; k <= N ; ++k)
		for (int i = 1 ; i <= N ; ++i)
			for (int j = 1 ; j <= N ; ++j)
				path[i][j] = min(path[i][j], path[i][k] + path[k][j]);

	for (int i = 0 ; i < M ; ++i)
	{
		int src, dst, cost;
		cin >> src >> dst >> cost;
		if (path[src][dst] <= cost)
			cout << "Enjoy other party\n";
		else
			cout << "Stay here\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
