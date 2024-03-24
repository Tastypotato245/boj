// https://www.acmicpc.net/problem/11660
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int arr[1025][1025];

void Solve()
{
	cin >> N >> M;
	for (int i = 1 ; i <= N ; ++i)
	{
		for (int j = 1 ; j <= N ; ++j)
		{
			int tmp;
			cin >> tmp;
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + tmp;
		}
	}
//	cout << "\n\n";
//	for (int i = 1 ; i <= N ; ++i)
//	{
//		for (int j = 1 ; j <= N ; ++j)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	cout << "\n\n";
	for (int i = 0 ; i < M ; ++i)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
