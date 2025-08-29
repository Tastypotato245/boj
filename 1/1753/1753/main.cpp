// https://www.acmicpc.net/problem/1753
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF_I 1000000000

using namespace std;

using ii = pair<int, int>;

int	V, E, K;
// u, v, w <= 10
vector<ii> edge[20001];
int ans[20001];

void Solve() {
	cin >> V >> E >> K;

	fill(ans, ans + 20001, INF_I);
	for (int i = 0 ; i < E ; ++i)
	{
		int u, v, w;
		cin >> u >> v >> w;
		edge[u].emplace_back(w, v);
	}

	priority_queue<ii, vector<ii>, greater<ii> > pq;

	ans[K] = 0;
	pq.push({0, K});

	while (!pq.empty())
	{
		auto [w, v] = pq.top();
		pq.pop();
		for (auto [t_w, t_v] : edge[v])
		{
			t_w += w;
			if (t_w > ans[t_v])
				continue;
			ans[t_v] = t_w;
			pq.push({t_w, t_v});
		}
	}

	for (int i = 1 ; i <= V ; ++i)
	{
		if (ans[i] == INF_I)
			cout << "INF";
		else
			cout << ans[i];
		cout << "\n";
	}

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
