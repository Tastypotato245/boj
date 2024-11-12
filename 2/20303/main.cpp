// https://www.acmicpc.net/problem/20303
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int	N, M, K;
int candy[30001];
int dp[3000];
bool vis[30001];

void Solve()
{
	// Input
	cin >> N >> M >> K;

	vector<int> friends[N + 1];
	for (int n = 1 ; n <= N ; ++n)
		cin >> candy[n];
	for (int m = 1 ; m <= M ; ++m)
	{
		int a, b;
		cin >> a >> b;
		friends[a].push_back(b);
		friends[b].push_back(a);
	}

	// Grouping
	// member, value
	vector<pair<int, int> > v;
	for (int n = 1 ; n <= N ; ++n)
	{
		queue<int> q;
		if (vis[n])
			continue ;
		q.push(n);
		v.push_back({0, 0});
		while (!q.empty())
		{
			int now = q.front();

			q.pop();
			if (vis[now])
				continue ;
			vis[now] = true;	
			v.back().first += 1;
			v.back().second += candy[now];
			for (int f : friends[now])
				if (!vis[f])
					q.push(f);
		}
	}

	// KS problem
//	for (int i = 0 ; i < v.size() ; ++i)
//		cout << v[i].first << " " << v[i].second << "\n";
	for (int i = 0 ; i < v.size() ; ++i)
		for (int j = K - 1 ; j >= v[i].first ; --j)
			dp[j] = max(dp[j], dp[j - v[i].first] + v[i].second);

	cout << dp[K - 1] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
