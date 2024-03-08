// https://www.acmicpc.net/problem/2178
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N, M;
int arr[101][101];
bool visit[101][101];
queue<pair<int, int> > q;
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

void Solve()
{
	cin >> N >> M;
	char tmp;
	for (int i = 1 ; i <= N ; ++i)
	{
		for (int j = 1 ; j <= M ; ++j)
		{
			cin >> tmp;
			arr[i][j] = tmp - '0';
		}
	}
	q.push({1, 1});
	visit[1][1] = true;
	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0 ; i < 4 ; ++i)
		{
			int ty = y + dy[i];
			int tx = x + dx[i];
			if (ty >= 1 && ty <= N && tx >= 1 && tx <= M && arr[ty][tx] == 1 && visit[ty][tx] == false)
			{
				visit[ty][tx] = true;
				arr[ty][tx] = arr[y][x] + 1;
				q.push({ty, tx});
			}
		}
	}	
	cout << arr[N][M] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
