// https://www.acmicpc.net/problem/14502
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
using ii = pair<int, int>;

int	N, M, ans;
int board_origin[8][8];
int board[8][8];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

queue<ii> virus_origin;

bool isIn(int y, int x)
{
	return (y >= 0 && y < N && x >= 0 && x < M);
}

void bfs()
{
	queue<ii> q(virus_origin);

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			board[i][j] = board_origin[i][j];

	while (q.size())
	{
		auto [y, x] = q.front(); q.pop();

		for (int i = 0 ; i < 4 ; ++i)
		{
			int ty = y + dy[i];
			int tx = x + dx[i];
			if (isIn(ty, tx) && board[ty][tx] == 0)
			{
				board[ty][tx] = 2;
				q.push({ty, tx});
			}
		}
	}

	int tmp = 0;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			if (board[i][j] == 0)
				++tmp;
	ans = max(ans, tmp);
}

void dfs(int cnt, int before)
{
	if (cnt == 3)
	{
		bfs();
		return ;
	}

	for (int i = before + 1 ; i < N * M ; ++i)
	{
		if (board_origin[i / M][i % M] == 0)
		{
			board_origin[i / M][i % M] = 1;
			dfs(cnt + 1, i);
			board_origin[i / M][i % M] = 0;
		}
	}
}

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
		{
			cin >> board_origin[i][j];
			if (board_origin[i][j] == 2)
				virus_origin.push({i, j});
		}
	dfs(0, -1);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
