// https://www.acmicpc.net/problem/1890
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int board[110][110];
long long dp[110][110];

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < N ; ++j)
			cin >> board[i][j];
	dp[0][0] = 1;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < N ; ++j)
		{
			if (i == N - 1 & j == N - 1)
				break ;
			dp[i + board[i][j]][j] += dp[i][j];
			dp[i][j + board[i][j]] += dp[i][j];
		}
	cout << dp[N - 1][N - 1] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
