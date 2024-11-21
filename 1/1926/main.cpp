// https://www.acmicpc.net/problem/1926
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
using ii = pair<int, int>;

int	N, M;
bool board[500][500];
bool vis[500][500];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

bool isIn(int y, int x)
{
	return (y >= 0 && y < N && x >= 0 && x < M);
}

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> board[i][j];

	int big = 0, ans = 0;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
		{
			if (vis[i][j] || !board[i][j])
				continue ;
			vis[i][j] = true;

			++ans;
			queue<ii> q;
			q.push({i, j});
			int cnt = 0;
			while (q.size())
			{
				auto [y, x] = q.front(); q.pop();
				++cnt;
				for (int k = 0 ; k < 4 ; ++k)
				{
					int ty = y + dy[k];
					int tx = x + dx[k];
					if (!isIn(ty, tx) || vis[ty][tx] || !board[ty][tx])
						continue ;
					vis[ty][tx] = true;
					q.push({ty, tx});
				}
			}
			big = max(big, cnt);
		}
	cout << ans << "\n";
	cout << big << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
