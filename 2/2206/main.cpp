// https://www.acmicpc.net/problem/2206
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;
typedef struct	s_item
{
	int break_dance; //chance of break the wall 삐끼삐끼 브레이킹댄스
	int y;
	int x;
}				t_item;

int	N, M;

char board[1001][1001];
// 0 : already breaked
// 1 : non-break
int vis[2][1001][1001];

int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

bool promise(t_item t)
{
	return (t.y >= 0 && t.y < N && t.x >= 0 && t.x < M);
}

int bfs()
{
	queue<t_item> q;
	q.push({1, 0, 0});
	vis[1][0][0] = 1;
	while (!q.empty())
	{
		t_item tmp = q.front();
		q.pop();
		if (tmp.y == N - 1 && tmp.x == M - 1)
			return vis[tmp.break_dance][N - 1][M - 1];
		for (int i = 0 ; i < 4 ; ++i)
		{
			int t_y = tmp.y + dy[i];
			int t_x = tmp.x + dx[i];
			if (promise(tmp))
			{
				if (vis[0][t_y][t_x] == 0 && board[t_y][t_x] == '1' && tmp.break_dance == 1)
				{
					vis[0][t_y][t_x] = vis[1][tmp.y][tmp.x] + 1;
					q.push({0, t_y, t_x});
				}
				else if (vis[tmp.break_dance][t_y][t_x] == 0 && board[t_y][t_x] == '0')
				{
					vis[tmp.break_dance][t_y][t_x] = vis[tmp.break_dance][tmp.y][tmp.x] + 1;
					q.push({tmp.break_dance, t_y, t_x});
				}
			}
		}
	}
	return (-1);
}

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> board[i][j];
	cout << bfs() << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
