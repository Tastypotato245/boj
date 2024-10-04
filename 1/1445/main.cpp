// https://www.acmicpc.net/problem/1445
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N, M;
int cost_board[50][50];
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, -1, 1};


char board[50][50];
int pass_g, near_g;

queue<pair<int, int> > q;
pair<int, int> target;

bool IsIn(int y, int x)
{
	return (y >= 0 && y < N && x >= 0 && x < M);
}

int GetCostType(int y, int x)
{
	if (board[y][x] == 'g')
		return (10000);
	if ((IsIn(y - 1, x) && board[y - 1][x] == 'g')
			|| (IsIn(y + 1, x) && board[y + 1][x] == 'g')
			|| (IsIn(y, x - 1) && board[y][x - 1] == 'g')
			|| (IsIn(y, x + 1) && board[y][x + 1] == 'g'))
		return (1);
	return (0);
}

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
		{
			cost_board[i][j] = 30003000;
			cost_board[i][j] = 30003000;
			cin >> board[i][j];
			if (board[i][j] == 'S')
			{
				q.push({i, j});
				cost_board[i][j] = 0;
			}
			else if (board[i][j] == 'F')
			{
				target = {i, j};
			}
		}

	while (!q.empty())
	{
		int y = q.front().first, x = q.front().second;
		q.pop();


		for (int i = 0 ; i < 4 ; ++i)
		{
			int ty = y + dy[i], tx = x + dx[i];
			if (IsIn(ty, tx))
			{
				if (board[ty][tx] == 'F')
				{
					cost_board[ty][tx] = min(cost_board[ty][tx], cost_board[y][x]);
					continue ;
				}
				int cost = GetCostType(ty, tx);

				if (cost_board[ty][tx] > cost_board[y][x] + cost)
				{
					cost_board[ty][tx] = cost_board[y][x] + cost;
					q.push({ty, tx});
				}
			}
		}
	}
	int pass_g = cost_board[target.first][target.second] / 10000;
	int near_g = cost_board[target.first][target.second] % 10000;

	cout << pass_g << " " << near_g << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
