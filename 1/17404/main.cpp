// https://www.acmicpc.net/problem/17404
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, ans = 1000000;
int rgb[1000][3];
int dp[3][1000][3];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> rgb[i][0] >> rgb[i][1] >> rgb[i][2];
		for (int k = 0 ; k < 3 ; ++k)
		{
			dp[k][i][0] = rgb[i][0];
			dp[k][i][1] = rgb[i][1];
			dp[k][i][2] = rgb[i][2];
		}
	}
	for (int k = 0 ; k < 3 ; ++k)
	{
		dp[k][0][(k + 1) % 3] = 1000000;
		dp[k][0][(k + 2) % 3] = 1000000;
		dp[k][N - 1][k] = 1000000;
		for (int i = 1 ; i < N ; ++i)
		{
			dp[k][i][0] = min(dp[k][i - 1][1] + dp[k][i][0], dp[k][i - 1][2] + dp[k][i][0]);
			dp[k][i][1] = min(dp[k][i - 1][0] + dp[k][i][1], dp[k][i - 1][2] + dp[k][i][1]);
			dp[k][i][2] = min(dp[k][i - 1][0] + dp[k][i][2], dp[k][i - 1][1] + dp[k][i][2]);
		}
	}

	for (int k = 0 ; k < 3 ; ++k)
		for (int l = 1 ; l <= 2 ; ++l)
			ans = min(ans, dp[k][N - 1][(k + l) % 3]);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
