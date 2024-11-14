// https://www.acmicpc.net/problem/1504
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define INF 1000000000

using namespace std;
using ii = pair<int, int>;

int	N, E, stop1, stop2;
int dis[3][801];
vector<ii> v[801];

void dijkstra(int s, int n)
{
	priority_queue<ii, vector<ii>, greater<ii> > pq;

	fill(dis[n], dis[n] + 801, INF);
	pq.emplace(0, s);
	dis[n][s] = 0;
	while (!pq.empty())
	{
		auto [cost, dst] = pq.top();
		pq.pop();
		for (auto [ncost, ndst] : v[dst])
		{
			ncost += cost;
			if (ncost > dis[n][ndst])
				continue ;
			dis[n][ndst] = ncost;
			pq.emplace(ncost, ndst);
		}
	}
}

void Solve()
{
	cin >> N >> E;
	for (int i = 0 ; i < E ; ++i)
	{
		int s, d, cost;
		cin >> s >> d >> cost;
		v[s].emplace_back(cost, d);
		v[d].emplace_back(cost, s);
	}
	cin >> stop1 >> stop2;

	dijkstra(1, 0);
	dijkstra(stop1, 1);
	dijkstra(stop2, 2);

	int ans1 = min(INF, dis[0][stop1] + dis[1][stop2]) + dis[2][N];
	int ans2 = min(INF, dis[0][stop2] + dis[2][stop1]) + dis[1][N];
	int ans = min(ans1, ans2);
	if (ans >= INF)
		cout << "-1" << "\n";
	else
		cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
