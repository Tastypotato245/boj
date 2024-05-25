// https://www.acmicpc.net/problem/15685
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int N;
bool board[101][101];
int dir_x[4] = {1, 0, -1, 0};
int dir_y[4] = {0, -1, 0, 1};


void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int	x, y, d, g;
		cin >> x >> y >> d >> g;
		list<int> l;
		board[y][x] = true;
		y += dir_y[d];
		x += dir_x[d];
		board[y][x] = true;
		l.push_back((d + 1) % 4);
		for (int j = 0 ; j < g ; ++j)
		{
			auto it = l.end();
			while (it != l.begin())
			{
				it = prev(it, 1);
//				cout << " - (" << dir_x[*it] << ", " << dir_y[*it] << ")\n";
				y += dir_y[*it];
				x += dir_x[*it];
				board[y][x] = true;
				l.push_back((*it + 1) % 4);
			}
		}
	}

	int ans = 0;
	for (int i = 1 ; i <= 100; ++i)
		for (int j = 1 ; j <= 100 ; ++j)
			if (board[i - 1][j - 1] && board[i - 1][j] && board[i][j - 1] && board[i][j])
				++ans;
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
