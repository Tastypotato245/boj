// https://www.acmicpc.net/problem/1025
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N, M;
char board[9][9];
bool vis[9][9];
int ans = -1;

bool isIn(int y, int x)
{
	return (y >= 0 && y < N && x >= 0 && x < M);
}

bool isCompletePowerNumber(int num)
{
	int t = (int)sqrt(num);

	for (; t * t <= num ; ++t)
		if (t * t == num)
			return (true);
	return (false);
}

int iter = 0;
void dfs(int y, int x, int tmp, int dy, int dx)
{
	if (!isIn(y , x) || vis[y][x])
		return ;
	int newtmp = tmp * 10 + (board[y][x] - '0');
	vis[y][x] = true;

//	cout << "y: " << y << ",x: " << x << ", board[y][x]: " << board[y][x] << ", newtmp:" << newtmp << "\n";
	if (isCompletePowerNumber(newtmp))
		ans = max(ans, newtmp);
	dfs(y + dy, x + dx, newtmp, dy, dx);
	vis[y][x] = false;
}

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> board[i][j];
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			for (int k = -(N - 1) ; k < N ; ++k)
				for (int l = -(M - 1) ; l < M ; ++l)
					dfs(i, j, 0, k, l);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
