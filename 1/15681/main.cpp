// https://www.acmicpc.net/problem/15681
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, R, Q;
vector<int> v[100001];
int dp[100001];
bool vis[100001];

void dfs(int subroot)
{
	for (int i = 0 ; i < v[subroot].size() ; ++i)
	{
		if (vis[v[subroot][i]] == false)
		{
			vis[v[subroot][i]] = true;
			dfs(v[subroot][i]);
			dp[subroot] += dp[v[subroot][i]];
		}
	}
//	cout << subroot << ": " << dp[subroot] << "\n";
}

void Solve()
{
	cin >> N >> R >> Q;

	fill(dp, dp + N + 1, 1);
	for (int i = 0 ; i < N - 1 ; ++i)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	vis[R] = true;
	dfs(R);

	for (int q = 0 ; q < Q ; ++q)
	{
		int now;
		cin >> now;
// 출력
		cout << dp[now] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
