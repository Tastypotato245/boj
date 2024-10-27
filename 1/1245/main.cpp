// https://www.acmicpc.net/problem/1245
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;

int	N, M, ans = 0;
int board[100][70];
bool vis[100][70];

int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isIn(int i, int j)
{
	return (i >= 0 && i < N && j >= 0 && j < M);
}

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> board[i][j];

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
		{
			if (vis[i][j] == false)
			{
				vis[i][j] = true;
				queue<pair<int, int> > q;
				int now = board[i][j];
				bool isHill = true;

				q.push({i, j});
				while (!q.empty())
				{
					int y = q.front().first;
					int x = q.front().second;
					q.pop();
					for (int k = 0 ; k < 8 ; ++k)
					{
						int ty = y + dy[k];
						int tx = x + dx[k];
						
						if (isIn(ty, tx))
						{
							if (now == board[ty][tx] && vis[ty][tx] == false)
							{
								q.push({ty, tx});
								vis[ty][tx] = true;
							}
							else if (now < board[ty][tx])
								isHill = false;
						}
					}
				}
				if (isHill)
					ans++;
			}
		}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
