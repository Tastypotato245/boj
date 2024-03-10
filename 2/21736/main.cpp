// https://www.acmicpc.net/problem/21736
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
int	M;
char arr[600][600];
bool visit[600][600];
int x, y;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int ans;

queue<pair<int, int> > q;

void Solve()
{
	cin >> N;
	cin >> M;
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < M ; ++j)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'I')
			{
				q.push({i, j});
				visit[i][j] = true;
			}
			else if (arr[i][j] == 'X')
				visit[i][j] = true;
		}
	}
	while (!q.empty())
	{
		y = q.front().first;
		x = q.front().second;
		for (int i = 0 ; i < 4 ; ++i)
		{
			int ty = y + dy[i];
			int tx = x + dx[i];
			if (visit[ty][tx] == false && ty >= 0 && ty < N && tx >= 0 && tx < M)
			{
				visit[ty][tx] = true;
				q.push({ty, tx});
				if (arr[ty][tx] == 'P')
					ans++;
			}
		}
		q.pop();
	}
	if (ans == 0)
		cout << "TT\n";
	else
		cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
