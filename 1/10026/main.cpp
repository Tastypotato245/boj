// https://www.acmicpc.net/problem/10026
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	N;
int ans1;
int ans2;

string strs[100];
bool visit1[100][100];
bool visit2[100][100];


bool IsIn(int y, int x)
{
	return (y >= 0 && y < N && x >= 0 && x < N);
}

void Dfs1(char color, int y, int x)
{
	if (!IsIn(y, x) || visit1[y][x] || strs[y][x] != color)
		return ;
	visit1[y][x] = 1;
	Dfs1(color, y - 1, x);
	Dfs1(color, y + 1, x);
	Dfs1(color, y, x - 1);
	Dfs1(color, y, x + 1);
}

void Dfs2(char color, int y, int x)
{
	if (!IsIn(y, x) || visit2[y][x] ||
			(color == 'R' && strs[y][x] == 'B') ||
			(color == 'G' && strs[y][x] == 'B') ||
			(color == 'B' && strs[y][x] != 'B')
			)
		return ;
	visit2[y][x] = 1;
	Dfs2(color, y - 1, x);
	Dfs2(color, y + 1, x);
	Dfs2(color, y, x - 1);
	Dfs2(color, y, x + 1);
}

void Solve()
{
	cin >> N;
	for (int i = 0; i < N ; ++i)
		cin >> strs[i];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (visit1[i][j] == 0)
				++ans1;
			if (visit2[i][j] == 0)
				++ans2;
			Dfs1(strs[i][j], i, j);
			Dfs2(strs[i][j], i, j);
		}
	}
	cout << ans1 << " " << ans2 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
