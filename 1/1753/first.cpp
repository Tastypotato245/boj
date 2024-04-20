// https://www.acmicpc.net/problem/1753
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <climits>

using namespace std;

int	V, E, S;
bool visit[20001];
int ans[20001];

//pq[u] = {w, v}
priority_queue<pair<int, int>, vector<pair<int, int> > , greater<pair<int, int> > > pq[20001];

void Solve()
{
	cin >> V >> E >> S;
	fill(ans, ans + 20001, INT_MAX);
	for (int i = 0 ; i < E ; ++i)
	{
		int u, v, w;
		cin >> u >> v >> w;
		pq[u].push({w, v});
	}
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pqq;

	visit[S] = true;
	ans[S] = 0;
	pqq.push({0, S});
	while (!pqq.empty())
	{
		int u = pqq.top().second;
		pqq.pop();
		visit[u] = true;
		while (!pq[u].empty())
		{
			int v = pq[u].top().second;
			int w = pq[u].top().first;
			pq[u].pop();
			if (visit[v] == true)
				continue ;
			ans[v] = min(ans[v], ans[u] + w);
			pqq.push({ans[v], v});
		}
	}
	for (int i = 1 ; i <= V ; ++i)
		if (ans[i] == INT_MAX) cout << "INF" << "\n";
		else cout << ans[i] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
