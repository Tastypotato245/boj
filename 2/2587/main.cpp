// https://www.acmicpc.net/problem/2587
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int arr[5];
	int sum = 0;
	for (int i = 0 ; i < 5 ; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + 5);
	cout << sum / 5 << "\n" << arr[2];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
