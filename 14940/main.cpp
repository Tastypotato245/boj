// https://www.acmicpc.net/problem/14940
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N, M;

int arr[1000][1000];
bool visit[1000][1000];
queue<pair<int, int> > q;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int t_y;
int t_x;
int t_dy;
int t_dx;

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < M ; ++j)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 2)
			{
				q.push({i, j});
				visit[i][j] = true;
				arr[i][j] = 0;
			}
		}
	}
	while (!q.empty())
	{
		t_y = q.front().first;
		t_x = q.front().second;
		q.pop();
		for (int i = 0 ; i < 4 ; ++i)
		{
			t_dy = t_y + dy[i];
			t_dx = t_x + dx[i];
			if (t_dy >= 0 && t_dy < N && t_dx >= 0 && t_dx < M && !visit[t_dy][t_dx] && arr[t_dy][t_dx] == 1)
			{
				visit[t_dy][t_dx] = true;
				arr[t_dy][t_dx] = arr[t_y][t_x] + 1;
				q.push({t_dy, t_dx});
			}
		}
	}
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < M ; ++j)
		{
			if (visit[i][j] == false && arr[i][j] == 1)
				cout << "-1" << " ";
			else
				cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
