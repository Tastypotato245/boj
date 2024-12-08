// https://www.acmicpc.net/problem/15558
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;
// time, y, x
using iii = tuple<int, int, int>;

int	N, k;
bool board[2][100000];
bool vis[2][100000];

void Solve()
{
	cin >> N >> k;

	for (int i = 0 ; i < 2 ; ++i)
		for (int j = 0 ; j < N ; ++j)
		{
			char c;
			cin >> c;
			if (c == '1')
				board[i][j] = true;
		}

	queue<iii> q;
	q.push({0, 0, 0});
	vis[0][0] = true;
	bool success = false;

	while (q.size())
	{
		auto [time, y, x] = q.front(); q.pop();
//		cout << time << ", " <<  y << ", " << x << "\n";

		if (x >= N || x + 1 >= N || x + k >= N)
		{
			success = true;
			break ;
		}
		int ty, tx;
		// y , x + 1
		ty = y;	tx = x + 1;
		if (board[ty][tx] && !vis[ty][tx])
		{
			vis[ty][tx] = true;
			q.push({time + 1, ty, tx});
		}
		// y , x - 1
		ty = y; tx = x - 1;
		if (time < tx && board[ty][tx] && !vis[ty][tx])
		{
			vis[ty][tx] = true;
			q.push({time + 1, ty, tx});
		}
		// (y + 1) % 2 , x + k
		ty = (y + 1) % 2; tx = x + k;
		if (board[ty][tx] && !vis[ty][tx])
		{
			vis[ty][tx] = true;
			q.push({time + 1, ty, tx});
		}
	}
	cout << success;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
