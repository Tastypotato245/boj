// https://www.acmicpc.net/problem/2563
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
bool board[100][100];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int y, x;
		cin >> x >> y;
		for (int q = 0 ; q < 10 ; ++q)
			for (int w = 0 ; w < 10 ; ++w)
				board[q + y][w + x] = true;
	}
	int ans = 0;
	for (int i = 0 ; i < 100 ; ++i)
		for (int j = 0 ; j < 100 ; ++j)
			if (board[i][j])
				++ans;
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
