// https://www.acmicpc.net/problem/
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;
long long dp[31];

void Solve()
{
	cin >> N;
	dp[0] = 1;
	dp[2] = 3;
	for (int i = 4 ; i < 31 ; i += 2)
	{
		dp[i] = 4 * dp[i - 2] - dp[i - 4];
	}
	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
