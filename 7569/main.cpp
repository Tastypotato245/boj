// https://www.acmicpc.net/problem/7569
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;

int	M;
int	N;
int	H;
int arr[101][101][101];
int	dx[6] = {-1, 1, 0, 0, 0, 0};
int	dy[6] = {0, 0, -1, 1, 0, 0};
int	dz[6] = {0, 0, 0, 0, -1, 1};
int ans;

queue<tuple<int, int, int> > q;

void Input()
{
	cin >> M;
	cin >> N;
	cin >> H;
	for (int i = 0 ; i < H ; ++i)
	{
		for (int j = 0 ; j < N ; ++j)
		{
			for (int k = 0 ; k < M ; ++k)
			{
				cin >> arr[i][j][k];
				if (arr[i][j][k] == 1)
					q.push({i, j, k});
			}
		}
	}
}

void Output()
{
	for (int i = 0 ; i < H ; ++i)
	{
		for (int j = 0 ; j < N ; ++j)
		{
			for (int k = 0 ; k < M ; ++k)
			{
				ans = max(ans, arr[i][j][k]);
				if (arr[i][j][k] == 0)
				{
					cout << "-1" << "\n";
					return ;
				}
			}
		}
	}
	cout << ans - 1 << "\n";
}

bool IsIn(int z, int y, int x)
{
	return (z >= 0 && z < H && y >= 0 && y < N && x >= 0 && x < M);
}

void Solve()
{
	int t_z;
	int t_y;
	int t_x;
	while (!q.empty())
	{
		t_z = get<0>(q.front());
		t_y = get<1>(q.front());
		t_x = get<2>(q.front());
		q.pop();
		for (int i = 0 ; i < 6 ; ++i)
		{
			int t_dz = t_z + dz[i];
			int t_dy = t_y + dy[i];
			int t_dx = t_x + dx[i];
			if (IsIn(t_dz, t_dy, t_dx) && arr[t_dz][t_dy][t_dx] == 0)
			{
				arr[t_dz][t_dy][t_dx] = arr[t_z][t_y][t_x] + 1;
				q.push({t_dz, t_dy, t_dx});
			}
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Input(); Solve(); Output();
	return (0);
}
