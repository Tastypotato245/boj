// https://www.acmicpc.net/problem/1932
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[2][501];

void Solve()
{
	cin >> N;
	for (int i = 1; i <= N ; ++i)
	{
		for (int j = 1; j <= i ; ++j)
		{
			int tmp;
			cin >> tmp;
			arr[(i + 1) % 2][j] = max(arr[i % 2][j - 1], arr[i % 2][j]) + tmp;
		}
	}
	sort(arr[(N + 1) % 2] + 1, arr[(N + 1) % 2] + N + 1);
	cout << arr[(N + 1) % 2][N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
