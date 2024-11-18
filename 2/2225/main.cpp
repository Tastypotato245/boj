// https://www.acmicpc.net/problem/2225
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, K;
int dp[201];

void Solve()
{
	cin >> N >> K;
	fill(dp, dp + N + 1, 1);
	for (int i = 2 ; i <= K ; ++i)
		for (int j = 1 ; j <= N ; ++j)
			dp[j] = (dp[j] + dp[j - 1]) % 1000000000;
	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
