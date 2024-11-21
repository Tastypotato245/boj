// https://www.acmicpc.net/problem/1162
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <queue>
#define INF 1000000000000

using namespace std;
using lii = tuple<long long, int, int>;
using li = pair<long long, int>;

int	N, M, K;
vector<li> v[10001];
// f: cost | s: dst | t: remove k count
priority_queue<lii, vector<lii>, greater<lii> > pq;
//  count k | node
long long dp[21][10001];

// dp + dijkstra
void Solve()
{
	// input
	cin >> N >> M >> K;
	for (int i = 0 ; i < M ; ++i)
	{
		long long s, d, cost;
		cin >> s >> d >> cost;
		v[s].push_back({cost, d});
		v[d].push_back({cost, s});
	}

	pq.push({0, 1, 0});
	for (int i = 0 ; i <= K ; ++i)
		fill(dp[i], dp[i] + N + 1, INF);

	while (pq.size())
	{
		auto [cost, now, k] = pq.top(); pq.pop();

		if (cost > dp[k][now])
			continue ;
		dp[k][now] = cost;
		for (auto [ncost, dst] : v[now])
		{
			// k 증가
			if (k < K && cost < dp[k + 1][dst])
			{
//				cout << "test1\n";
				dp[k + 1][dst] = cost;
				pq.push({cost, dst, k + 1});
			}
			// k 유지
			ncost += cost;
//			cout << "dst: " << dst << ", ncost: " << ncost << "\n";
			if (ncost < dp[k][dst])
			{
//				cout << "test2\n";
				dp[k][dst] = ncost;
				pq.push({ncost, dst, k});
			}
		}
	}

//	for (int i = 0 ; i <= K ; ++i)
//	{
//		for (int j = 1 ; j <= N ; ++j)
//			cout << dp[i][j] << " ";
//		cout << "\n";
//	}
	long long ans = INF;
	for (int i = 0 ; i <= K ; ++i)
		ans = min(ans, dp[i][N]);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
