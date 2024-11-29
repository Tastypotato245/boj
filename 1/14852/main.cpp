// https://www.acmicpc.net/problem/
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#define MOD 1000000007

using namespace std;

int	N;
long long dp[1000001];

void Solve()
{
	cin >> N;
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 7;
	for (int i = 3; i <= N ; ++i)
		dp[i] = ((dp[i - 1] * 3) % MOD + (dp[i - 2] - dp[i - 3] < 0 ? dp[i - 2] - dp[i - 3] + MOD : dp[i - 2] - dp[i - 3]) % MOD) % MOD;
	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
