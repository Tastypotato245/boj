// https://www.acmicpc.net/problem/20976
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	arr[3];

void Solve()
{
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	cout << arr[1];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
