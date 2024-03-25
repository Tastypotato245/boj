// https://www.acmicpc.net/problem/9465
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	T, N;

void Solve()
{
	cin >> T;
	for (int t = 0; t < T ; ++t)
	{
		cin >> N;
		int arr[4][N + 1];
		fill_n(arr[0], N + 1, 0);
		fill_n(arr[1], N + 1, 0);
		fill_n(arr[2], N + 1, 0);
		fill_n(arr[3], N + 1, 0);
		for (int i = 1 ; i <= N ; ++i)
			cin >> arr[0][i];
		for (int i = 1 ; i <= N ; ++i)
			cin >> arr[1][i];
		arr[2][1] = arr[0][1];
		arr[3][1] = arr[1][1];
		for (int i = 2 ; i <= N ; ++i)
		{
			arr[2][i] = max(arr[3][i - 1], arr[3][i - 2]) + arr[0][i];
			arr[3][i] = max(arr[2][i - 1], arr[2][i - 2]) + arr[1][i];
		}
		cout << max(arr[2][N], arr[3][N]) << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
