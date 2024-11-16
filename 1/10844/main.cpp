// https://www.acmicpc.net/problem/10844
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[101][11];

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < 10 ; ++i)
		dp[1][i] = 1;
	for (int i = 2 ; i <= N ; ++i)
		for (int j = 0 ; j < 10 ; ++j)
		{
			if (j == 0)
				dp[i][j] = dp[i - 1][j + 1];
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	int ans = 0;
	for (int i = 1 ; i < 10 ; ++i)
		ans = (ans + dp[N][i]) % 1000000000;
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
