// https://www.acmicpc.net/problem/1005
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int	T, N, K;

//위상정렬
void Solve()
{
	cin >> T;
	for (int t = 0 ; t < T ; ++t)
	{
		// input
		cin >> N >> K;
		int cost[N + 1];
		for (int n = 1 ; n <= N ; ++n)
			cin >> cost[n];

		int in_degree[N + 1];
		vector<int> v[N + 1];
		fill(in_degree, in_degree + N + 1, 0);
		for (int k = 0 ; k < K ; ++k)
		{
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			in_degree[y]++;
		}
		int W;
		cin >> W;
	
		//cal
		queue<int> q;
		int ans = 0;
		int total_cost[N + 1]; fill(total_cost, total_cost + N + 1, 0);
		for (int i = 1 ; i <= N ; ++i)
		{
			if (in_degree[i] == 0)
			{
				q.push(i);
				total_cost[i] = cost[i];
			}
		}
		while (!q.empty())
		{
			int now = q.front();
			q.pop();
			for (int item : v[now])
			{
				in_degree[item]--;
				total_cost[item] = max(total_cost[item], total_cost[now] + cost[item]);
				if (in_degree[item] == 0)
					q.push(item);
			}
		}
		cout << total_cost[W] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}

