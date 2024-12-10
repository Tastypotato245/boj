// https://www.acmicpc.net/problem/17485
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int dp[1001][1001][3];
int board[1001][1001];

void Solve()
{
	cin >> N >> M;

	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= M ; ++j)
			cin >> board[i][j];

	int ans = 1000000000;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= M ; ++j)
		{
			if (j == 1)
			{
				dp[i][j][0] = board[i][j] + dp[i - 1][j][1];
				dp[i][j][1] = board[i][j] + dp[i - 1][j + 1][0];
				dp[i][j][2] = board[i][j] + min(dp[i - 1][j][1], dp[i - 1][j + 1][0]);
			}
			else if (j == M)
			{
				dp[i][j][0] = board[i][j] + min(dp[i - 1][j - 1][2], dp[i - 1][j][1]);
				dp[i][j][1] = board[i][j] + dp[i - 1][j - 1][2];
				dp[i][j][2] = board[i][j] + dp[i - 1][j][1];
			}
			else
			{
				dp[i][j][0] = board[i][j] + min(dp[i - 1][j - 1][2], dp[i - 1][j][1]);
				dp[i][j][1] = board[i][j] + min(dp[i - 1][j + 1][0], dp[i - 1][j - 1][2]);
				dp[i][j][2] = board[i][j] + min(dp[i - 1][j][1], dp[i - 1][j + 1][0]);
			}
			if (i == N)
				ans = min(ans, *min_element(dp[i][j], dp[i][j] + 3));
		}

//	for (int i = 1 ; i <= N ; ++i)
//	{
//		for (int j = 1 ; j <= M ; ++j)
//		{
//			cout << dp[i][j][0] << "|" << dp[i][j][1] << "|" << dp[i][j][2] << "|" << "  ";
//		}
//		cout << "\n";
//	}
	cout << ans ;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
