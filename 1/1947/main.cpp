// https://www.acmicpc.net/problem/1947
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
long long dp[1000001];

void Solve()
{
	cin >> N;
	dp[1] = 0;
	dp[2] = 1;
	
	for (int i = 3 ; i <= N ; ++i)
		dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000000 * (i - 1) % 1000000000;
	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
