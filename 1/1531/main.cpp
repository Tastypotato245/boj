// https://www.acmicpc.net/problem/1531
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M, cnt;
int arr[101][101];

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < N ; ++i)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1 ; j <= x2 ; ++j)
			for (int k = y1 ; k <= y2 ; ++k)
			{
				arr[k][j]++;
				if (arr[k][j] == M + 1)
					cnt++;
			}
	}
	cout << cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
