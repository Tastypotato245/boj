// https://www.acmicpc.net/problem/9084
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T, N, M;

void Solve()
{
	cin >> T;
	for (int t = 0 ; t < T ; ++t)
	{
		cin >> N;
		vector<int> v(N);
		for (int n = 0 ; n < N ; ++n)
			cin >> v[n];
		cin >> M;
		int dp[M + 1];
		fill(dp, dp + M + 1, 0);

		dp[0] = 1;
		for (int j = 0 ; j < v.size() ; ++j)
			for (int i = v[j] ; i <= M ; ++i)
				dp[i] += dp[i - v[j]];
		cout << dp[M] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
