// https://www.acmicpc.net/problem/1753
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <climits>
#define INF_I 1000000000

using namespace std;

int	V, E, S;
bool visit[20001];
int ans[20001];

vector<pair<int, int> > vec[20001];

void Solve()
{
	cin >> V >> E >> S;
	fill(ans, ans + 20001, INF_I);
	for (int i = 0 ; i < E ; ++i)
	{
		int u, v, w;
		cin >> u >> v >> w;
		vec[u].push_back({w, v});
	}
	//	for (int i = 1 ; i <= V ; ++i)
	//		for (int j = 0 ; j < vec[i].size(); ++j)
	//			cout << vec[i][j].first << " : " <<  vec[i][j].second << "\n";
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	ans[S] = 0;
	pq.push({0, S});
	while (!pq.empty())
	{
		int u = pq.top().second;
		int w = pq.top().first;
		pq.pop();
		if (visit[u])
			continue ;
		ans[u] = w;
		visit[u] = true;
		for (int i = 0 ; i < vec[u].size() ; ++i)
		{
			int v = vec[u][i].second;
			if (!visit[v])
				pq.push({vec[u][i].first + ans[u], v});
		}
	}
	for (int i = 1 ; i <= V ; ++i)
		if (ans[i] == INF_I) cout << "INF" << "\n";
		else cout << ans[i] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
