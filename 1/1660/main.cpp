// https://www.acmicpc.net/problem/1660
// github/Tastypotato245/boj
#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[300001];

void Solve()
{
	int delta = 1;
	int middle = 1;
	int target = 1;

	cin >> N;
	fill(arr, arr + N + 1, 1000000000);
	while (target <= N)
	{
		arr[target] = 1;
		for (int i = target ; i <= N ; ++i)
			arr[i] = min(arr[i], arr[i - target] + 1);
		middle += ++delta;
		target += middle;
	}
	cout << arr[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
