// https://www.acmicpc.net/problem/17262
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[50001];

void Solve()
{
	cin >> N;
	for (int i = 1 ; i <= N ; ++i)
	{
		arr[i] = arr[i - 1] + 1;
		for (int j = 1 ; j * j <= i ; ++j)
			arr[i] = min(arr[i], arr[i - j * j] + 1);
	}
	cout << arr[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
