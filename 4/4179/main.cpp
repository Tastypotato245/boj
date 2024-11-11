// https://www.acmicpc.net/problem/4179
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;

int	R, C, ans;
char board[1000][1000];
int time_board[1000][1000];
int move_board[1000][1000];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

bool isIn(int i, int j)
{
	return (i >= 0 && i < R && j >= 0 && j < C);
}

bool isFinish(int i, int j)
{
	return (i == 0 || i == R - 1 || j == 0 || j == C - 1);
}

void Solve()
{
	cin >> R >> C;

	queue<pair<int, int> > qf;
	queue<pair<int, int> > qj;

	for (int i = 0 ; i < R ; ++i)
	{
		fill(time_board[i], time_board[i] + C, 1000000);
		fill(move_board[i], move_board[i] + C, 1000000);
	}

	for (int i = 0 ; i < R ; ++i)
		for (int j = 0 ; j < C ; ++j)
		{
			cin >> board[i][j];
			if (board[i][j] == 'F')
			{
				qf.push({i, j});
				time_board[i][j] = 0;
			}
			else if (board[i][j] == 'J')
			{
				qj.push({i, j});
				move_board[i][j] = 0;
			}
		}

	while (!qf.empty())
	{
		int y = qf.front().first;
		int x = qf.front().second;

		qf.pop();
		for (int i = 0 ; i < 4 ; ++i)
		{
			int ty = y + dy[i];
			int tx = x + dx[i];

			if (isIn(ty, tx) && time_board[ty][tx] == 1000000 && board[ty][tx] != '#')
			{
				time_board[ty][tx] = time_board[y][x] + 1;
				qf.push({ty, tx});
			}
		}
	}

	bool impossible = true;
	while (!qj.empty())
	{
		int y = qj.front().first;
		int x = qj.front().second;

		qj.pop();
		if (isFinish(y, x))
		{
			impossible = false;
			ans = move_board[y][x] + 1;
			break ;
		}
		for (int i = 0 ; i < 4 ; ++i)
		{
			int ty = y + dy[i];
			int tx = x + dx[i];
			
			if (isIn(ty, tx) && move_board[ty][tx] == 1000000 && move_board[y][x] + 1 < time_board[ty][tx] && board[ty][tx] != '#')
			{
				move_board[ty][tx] = move_board[y][x] + 1;
				qj.push({ty, tx});
			}
		}
	}
	if (impossible)
		cout << "IMPOSSIBLE" << "\n";
	else
		cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
