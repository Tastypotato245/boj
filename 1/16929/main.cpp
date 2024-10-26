// https://www.acmicpc.net/problem/16929
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;

int	N, M;
char board[50][50];
bool vis[50][50];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

bool isIn(int i, int j)
{	
	return ((i >= 0 && i < N) &&
			(j >= 0 && j < M));
}

bool Solve()
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
				queue<tuple<int, int, int, int> > q;
				q.push({i, j, i, j});
				vis[i][j] = true;
				while (!q.empty())
				{
					int tmpi = get<0>(q.front());
					int tmpj = get<1>(q.front());
					int origini = get<2>(q.front());
					int originj = get<3>(q.front());
					q.pop();
					for (int k = 0 ; k < 4 ; ++k)
					{
						int di = tmpi + dy[k];
						int dj = tmpj + dx[k];
						if (!(di == origini && dj == originj) && isIn(di, dj) && board[i][j] == board[di][dj])
						{
							if (vis[di][dj] == true)
								return (true);
							vis[di][dj] = true;
							q.push({di, dj, tmpi, tmpj});
						}
					}
				}
			}
		}
	return (false);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cout << (Solve() == true ? "Yes" : "No") << "\n";
	return (0);
}
