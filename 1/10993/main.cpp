// https://www.acmicpc.net/problem/10993
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;
// height 2^n - 1
// width(2^n - 1) * 2 - 1
// width maximum (2^10 - 1) * 2 - 1 = 2046
// next x = now_x + (now_width - next_width) / 2

// 2^(n + 1) - 2^n
// 2 * 2^n - 2^n = 2^n
// n: 1  2  3  4 
// h: 1  3  7  15
// w: 1  5  13 29
bool board[1023][2046];

void recur(int now, int y, int x)
{
	if (now == 0)
		return ;

	int height = pow(2, now) - 1;
	int width = height * 2 - 1;

	if (now % 2 == 0)
	{
		for (int i = 0 ; i < width ; ++i)
			board[y][x + i] = true;
		for (int i = 1 ; i < width - 1 ; ++i)
			board[(height > i ? y + i : y + (width - 1 - i))][x + i] = true;
		recur(now - 1, y + 1, x + pow(2, now) / 2);
	}
	else
	{
		for (int i = 1 ; i < width - 1 ; ++i)
			board[(height > i ? y + (height - 1) - i : y + i - (height - 1))][x + i] = true;
		for (int i = 0 ; i < width ; ++i)
			board[y + height - 1][x + i] = true;
		recur(now - 1, (y + y + height) / 2, x + pow(2, now) / 2);
	}
}

void Solve()
{
	cin >> N;
	recur(N, 0, 0);

	int height = pow(2, N) - 1;
	int width = height * 2 - 1;

	if (N % 2 == 1)
	{
		for (int i = 0 ; i < height ; ++i)
		{

			for (int j = 0 ; j < pow(2, N) + i ; ++j)
				cout << (board[i][j] ? "*" : " ");
			cout << "\n";
		}
	}
	else
	{
		for (int i = 0 ; i < height ; ++i)
		{
			for (int j = 0 ; j < width + 1 - i ; ++j)
				cout << (board[i][j] ? "*" : " ");
			cout << "\n";
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
