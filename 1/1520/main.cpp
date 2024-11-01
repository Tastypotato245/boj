// https://www.acmicpc.net/problem/1520
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int board[500][500];
int dp[500][500];

int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

bool isIn(int y, int x, int origin)
{
	return (y >= 0 && y < N && x >= 0 && x < M && board[y][x] > origin);
}

int dfs(int y, int x)
{
	if (x == 0 && y == 0)
		return 1;
	if (dp[y][x] != -1)
		return dp[y][x];
		
	dp[y][x] = 0;

	for (int i = 0 ; i < 4 ; ++i)
	{
		int ty = y + dy[i];
		int tx = x + dx[i];

		if (isIn(ty, tx, board[y][x]))
			dp[y][x] += dfs(ty, tx);
	}

	return dp[y][x];
}

void Solve()
{
	cin >> N >> M;
	
	//input
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> board[i][j];
	for (int i = 0 ; i < N ; ++i)
		fill(dp[i], dp[i] + M, -1);

	//solve
	dfs(N - 1, M - 1);
	cout << dp[N - 1][M - 1] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
