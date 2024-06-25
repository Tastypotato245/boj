// https://www.acmicpc.net/problem/11058
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;
long long dp[101];

void Solve()
{
	cin >> N;
	for (int i = 1 ; i <= 6 ; ++i)
		dp[i] = i;
	for (int i = 7 ; i <= N ; ++i)
		dp[i] = max(dp[i - 4] * 3, dp[i - 5] * 4);
	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
