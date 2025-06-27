// https://www.acmicpc.net/problem/15683
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, M;
int office[8][8];
int board[8][8];
int ans = 64;

int get_empty_cnt()
{
	int empty_cnt = 0;

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			if (board[i][j] == 0 && office[i][j] == 0)
				empty_cnt++;

	return empty_cnt;
}

// [i][j]에서 상하좌우 방향으로 filling함
void cctv_filling(int i, int j, int direction, int delta)
{
	direction %= 4;

	if (direction == 0)
	{
		for (int y = i ; y >= 0 ; --y)
		{
			if (office[y][j] == 6)
				break ;
			board[y][j] += delta;
		}
	}
	else if (direction == 1)
	{
		for (int y = i ; y < N ; ++y)
		{
			if (office[y][j] == 6)
				break ;
			board[y][j] += delta;
		}
	}
	else if (direction == 2)
	{
		for (int x = j ; x >= 0 ; --x)
		{
			if (office[i][x] == 6)
				break ;
			board[i][x] += delta;
		}
	}
	if (direction == 3)
	{
		for (int x = j ; x < M ; ++x)
		{
			if (office[i][x] == 6)
				break ;
			board[i][x] += delta;
		}
	}
}

void brute_force(int i, int j)
{
	/*
	cout << "\n";
	for (int y = 0 ; y < N ; ++y)
	{
		for (int x = 0 ; x < M ; ++x)
			cout << board[y][x] << " ";
		cout << "\n";
	}
	*/

	if (i == N && j == 0)
	{
		ans = min(ans, get_empty_cnt());
		return ;
	}


	if (office[i][j] == 0 || office[i][j] == 6)
	{
		brute_force(i + (j + 1) / M, (j + 1) % M);
	}
	else if (office[i][j] == 1)
	{
		for (int d = 0 ; d < 4 ; ++d)
		{
			cctv_filling(i, j, d, 1);
			brute_force(i + (j + 1) / M, (j + 1) % M);
			cctv_filling(i, j, d, -1);
		}
	}
	else if (office[i][j] == 2)
	{
		cctv_filling(i, j, 0, 1);
		cctv_filling(i, j, 1, 1);
		brute_force(i + (j + 1) / M, (j + 1) % M);
		cctv_filling(i, j, 0, -1);
		cctv_filling(i, j, 1, -1);

		cctv_filling(i, j, 2, 1);
		cctv_filling(i, j, 3, 1);
		brute_force(i + (j + 1) / M, (j + 1) % M);
		cctv_filling(i, j, 2, -1);
		cctv_filling(i, j, 3, -1);
	}
	else if (office[i][j] == 3)
	{
		cctv_filling(i, j, 0, 1);
		cctv_filling(i, j, 3, 1);
		brute_force(i + (j + 1) / M, (j + 1) % M);
		cctv_filling(i, j, 0, -1);
		cctv_filling(i, j, 3, -1);

		cctv_filling(i, j, 3, 1);
		cctv_filling(i, j, 1, 1);
		brute_force(i + (j + 1) / M, (j + 1) % M);
		cctv_filling(i, j, 3, -1);
		cctv_filling(i, j, 1, -1);

		cctv_filling(i, j, 1, 1);
		cctv_filling(i, j, 2, 1);
		brute_force(i + (j + 1) / M, (j + 1) % M);
		cctv_filling(i, j, 1, -1);
		cctv_filling(i, j, 2, -1);

		cctv_filling(i, j, 2, 1);
		cctv_filling(i, j, 0, 1);
		brute_force(i + (j + 1) / M, (j + 1) % M);
		cctv_filling(i, j, 2, -1);
		cctv_filling(i, j, 0, -1);
	}
	else if (office[i][j] == 4)
	{
		for (int d = 0 ; d < 4 ; ++d)
		{
			cctv_filling(i, j, d + 1, 1);
			cctv_filling(i, j, d + 2, 1);
			cctv_filling(i, j, d + 3, 1);

			brute_force(i + (j + 1) / M, (j + 1) % M);

			cctv_filling(i, j, d + 1, -1);
			cctv_filling(i, j, d + 2, -1);
			cctv_filling(i, j, d + 3, -1);
		}
	}
	else if (office[i][j] == 5)
	{
		cctv_filling(i, j, 0, 1);
		cctv_filling(i, j, 1, 1);
		cctv_filling(i, j, 2, 1);
		cctv_filling(i, j, 3, 1);

		brute_force(i + (j + 1) / M, (j + 1) % M);

		cctv_filling(i, j, 0, -1);
		cctv_filling(i, j, 1, -1);
		cctv_filling(i, j, 2, -1);
		cctv_filling(i, j, 3, -1);
	}
}


void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> office[i][j];

	brute_force(0, 0);

	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
