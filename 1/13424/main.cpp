// https://www.acmicpc.net/problem/13424
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#define MAX_BOUND 10000001

using namespace std;

void Solve()
{
	int	T;
	cin >> T;
	for (int t = 0 ; t < T ; ++t)
	{
		int N, M;
		cin >> N >> M;
		int edges[N + 1][N + 1];
		for (int i = 1 ; i <= N ; ++i)
			for (int j = 1 ; j <= N ; ++j)
			{
				if (i == j)
					edges[i][j] = 0;
				else
					edges[i][j] = MAX_BOUND;
			}

		for (int m = 0 ; m < M ; ++m)
		{
			int a, b, c;
			cin >> a >> b >> c;
			edges[a][b] = c;
			edges[b][a] = c;
		}

		for (int k = 1 ; k <= N ; ++k)
			for (int i = 1 ; i <= N ; ++i)
				for (int j = 1 ; j <= N ; ++j)
					edges[i][j] = min(edges[i][j], edges[i][k] + edges[k][j]);

		int K;
		cin >> K;
		int ans = -1;
		int minsum = MAX_BOUND;
		vector<int> human(K);
		for (int k = 0 ; k < K ; ++k)
			cin >> human[k];
		for (int n = 1 ; n <= N ; ++n)
		{
			int sum = 0;
			for (int k = 0 ; k < K ; ++k)
				sum += edges[human[k]][n];
			if (sum < minsum)
			{
				minsum = sum;
				ans = n;
			}
		}
		cout << ans << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
