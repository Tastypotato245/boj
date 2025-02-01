// https://www.acmicpc.net/problem/11945
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
char board[10][10];

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> board[i][j];

	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = M - 1 ; j >= 0 ; --j)
			cout << board[i][j];
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
