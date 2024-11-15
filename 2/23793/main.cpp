// https://www.acmicpc.net/problem/23783
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 2000000000

using namespace std;
using ii = pair<int, int>;

int	N, M, X, Y, Z;
vector<ii> v[100001]; // first | second
int dis[100001];

priority_queue<ii, vector<ii>, greater<ii> > pq;

int dijkstra(int pass, int s, int d)
{
	fill(dis, dis + N + 1, INF);

	pq.emplace(0, s);
	dis[s] = 0;
	while (!pq.empty())
	{
		auto [cost, dst] = pq.top();
		pq.pop();
		if (cost > dis[dst])
			continue ;
		for (auto [ncost, ndst] : v[dst])
		{
			if (ndst == pass)
				continue ;
			ncost += cost;
			if (ncost > dis[ndst])
				continue ;
			dis[ndst] = ncost;
			pq.emplace(ncost, ndst);
		}
	}

	return (dis[d]);
}

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < M ; ++i)
	{
		int s, d, cost;
		cin >> s >> d >> cost;
		v[s].emplace_back(cost, d);
	}
	cin >> X >> Y >> Z;

	int ans1_1 = dijkstra(0, X, Y);
	int ans1_2 = dijkstra(0, Y, Z);
	int ans2 = dijkstra(Y, X, Z);

	cout << ((ans1_1 == INF || ans1_2 == INF) ? -1 : ans1_1 + ans1_2) << " ";
	cout << ((ans2 == INF) ? -1 : ans2) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
