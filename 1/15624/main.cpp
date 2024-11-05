// https://www.acmicpc.net/problem/15624
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[1000001];

void Solve()
{
	cin >> N;

	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2 ; i <= N ; ++i )
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
