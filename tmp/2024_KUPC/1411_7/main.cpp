// https://www.acmicpc.net/problem/1411_7
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long N;
long long dp[100000001];

void Solve()
{
	cin >> N;

	dp[1] = 0;
	dp[2] = 0;
	dp[3] = 0;
	dp[4] = 1;
	dp[5] = 1;
	dp[6] = 2;
	dp[7] = 3;
	dp[8] = 5;
	for (long long i = 9 ; i <= N ; ++i)
		dp[i] = dp[i - 1] + ((i - 1) / 4);

	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
