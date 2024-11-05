// https://www.acmicpc.net/problem/11048
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int board[1002][1002];
int dp[1002][1002];

void Solve()
{
	cin >> N >> M;

	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= M ; ++j)
		{
			cin >> board[i][j];
			dp[i][j] += board[i][j];

			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
			dp[i][j + 1] = max(dp[i][j + 1], dp[i][j]);
			dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j]);
		}
	cout << dp[N][M] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
