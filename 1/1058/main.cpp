// https://www.acmicpc.net/problem/1058
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
char board[50][50];
bool vis[50][50];

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < N ; ++j)
			cin >> board[i][j];

	int ans = 0;
	for (int i = 0 ; i < N ; ++i)
	{
		queue<int> q;
		int cnt = 0;
		vis[i][i] = true;
		for (int j = 0 ; j < N ; ++j)
		{
			if (vis[i][j] == false && board[i][j] == 'Y')
			{
				++cnt;
				vis[i][j] = true;
				q.push(j);
			}
		}
		while (!q.empty())
		{
			int now = q.front();

			q.pop();
			for (int j = 0 ; j < N ; ++j)
			{
				if (vis[i][j] == false && board[now][j] == 'Y')
				{
					++cnt;
					vis[i][j] = true;
				}
			}
		}
		ans = max(ans, cnt);
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
