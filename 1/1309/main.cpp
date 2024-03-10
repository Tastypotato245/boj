// https://www.acmicpc.net/problem/1309
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[100001];

void Solve()
{
	cin >> N;

	dp[0] = 1;
	dp[1] = 3;
	dp[2] = 7;
	for (int i = 3 ; i <= N ; ++i)
		dp[i] = (3 * dp[i - 1] + 9901 - dp[i - 2] + 9901 - dp[i - 3]) % 9901;
	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
