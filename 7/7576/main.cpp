// https://www.acmicpc.net/problem/7576

#include <iostream>
#include <algorithm>
#include <queue>

#define MAX_M 1001
#define MAX_N 1001

using namespace std;

int	M; // j
int N; // i
int arr[MAX_N][MAX_M];
queue< pair<int, int> > q;

void Input()
{
	int	i;
	int	j;
	int	tmp;

	cin >> M;
	cin >> N;
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < M; ++j)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				q.push({i, j});
		}
	}
}

void Output()
{
	int	res = -1;
	int	i;
	int	j;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < M; ++j)
		{
			if (arr[i][j] == 0)
			{
				cout << "-1\n";
				return ;
			}
//			cout << arr[i][j] << " ";
			res = max(res, arr[i][j]);
		}
//		cout << "\n";
	}
	cout << (res - 1) << "\n";
}

bool IsIn(int y, int x)
{
	return (y >= 0 && y < N && x >= 0 && x < M);
}

void Solve() //bfs
{
	int i;
	int y;
	int x;

	while (!q.empty())
	{
		y = q.front().first;
		x = q.front().second;
		q.pop();
		if (IsIn(y - 1, x) && arr[y - 1][x] == 0)
		{
			arr[y - 1][x] = arr[y][x] + 1;
			q.push({y - 1, x});
		}
		if (IsIn(y, x - 1) && arr[y][x - 1] == 0)
		{
			arr[y][x - 1] = arr[y][x] + 1;
			q.push({y, x - 1});
		}
		if (IsIn(y + 1, x) && arr[y + 1][x] == 0)
		{
			arr[y + 1][x] = arr[y][x] + 1;
			q.push({y + 1, x});
		}
		if (IsIn(y, x + 1) && arr[y][x + 1] == 0)
		{
			arr[y][x + 1] = arr[y][x] + 1;
			q.push({y, x + 1});
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	Output();
	return (0);
}
