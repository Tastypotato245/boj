// https://www.acmicpc.net/problem/14500
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 501

int	N;
int	M;
int arr[MAX][MAX];
int visit[MAX][MAX];
int ans;

void Input()
{
	cin >> N;
	cin >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> arr[i][j];
}

void Output()
{
	cout << ans << "\n";
}

int dy[4] = {0, -1, 0, 1};
int dx[4] = {-1, 0, 1, 0};

void Recur(int len, int y, int x, int sum)
{
	if (len == 3)
	{
		ans = max(ans, sum);
		return ;
	}
	for (int i = 0 ; i < 4 ; ++i)
	{
		int tmp_y = y + dy[i];
		int tmp_x = x + dx[i];
		if (tmp_x >= 0 && tmp_x < M && tmp_y >= 0 && tmp_y < N && visit[tmp_y][tmp_x] == 0)
		{
			visit[tmp_y][tmp_x] = 1;
			Recur(len + 1 , tmp_y, tmp_x, sum + arr[tmp_y][tmp_x]);
			visit[tmp_y][tmp_x] = 0;
		}
	}
}

void Recur2(int len, int y, int x, int sum)
{
	if (len == 3)
	{
		ans = max(ans, sum);
		return ;
	}
	for (int i = 0 ; i < 4 ; ++i)
	{
		int tmp_y = y + dy[i];
		int tmp_x = x + dx[i];
		if (tmp_x >= 0 && tmp_x < M && tmp_y >= 0 && tmp_y < N && visit[tmp_y][tmp_x] == 0)
		{
			visit[tmp_y][tmp_x] = 1;
			Recur2(len + 1 , y, x, sum + arr[tmp_y][tmp_x]);
			visit[tmp_y][tmp_x] = 0;
		}
	}
}

void Solve()
{
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < M ; ++j)
		{
			visit[i][j] = 1;
			Recur(0, i, j, arr[i][j]);
			Recur2(0, i, j, arr[i][j]);
			visit[i][j] = 0;
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Input(); Solve(); Output();
	return (0);
}
