// https://www.acmicpc.net/problem/1411_8
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N, M;
int board[1000][1000];

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> board[i][j];

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
