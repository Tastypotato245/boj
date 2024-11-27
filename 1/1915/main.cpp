// https://www.acmicpc.net/problem/1915
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M, ans;
char c_board[1001][1001];
int board[1001][1001];

void Solve()
{
	cin >> N >> M;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= M ; ++j)
		{
			cin >> c_board[i][j];
			board[i][j] = c_board[i][j] - '0';
		}

	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= M ; ++j)
			if (board[i][j])
			{
				board[i][j] = min(board[i - 1][j - 1], min(board[i - 1][j], board[i][j - 1])) + 1;
				ans = max(ans, board[i][j]);
			}
	cout << ans * ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
