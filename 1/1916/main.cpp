// https://www.acmicpc.net/problem/1916
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;
using pii = pair<int, int>;

int	N, M, S, D;
int path[1001];
bool vis[1001];

// typical dijkstra algorithm
void Solve()
{
	cin >> N >> M;

	vector<pair<int, int> > v[N + 1];
	for (int i = 0 ; i < M ; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({b, c});
	}
	cin >> S >> D;

	priority_queue<pii, vector<pii>, greater<pii> > pq;
	int ans = 0;

	fill(path, path + 1001, 1000000000);
	path[S] = 0;
	pq.push({0, S});
	while (!pq.empty())
	{
		auto [cost, now] = pq.top();
		pq.pop();
		if (path[now] < cost)
			continue ;
		for (auto [d, c] : v[now])
		{
			c += cost;
			if (path[d] > c)
			{
				path[d] = c;
				pq.push({c, d});
			}
		}
	}
	cout << path[D] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
