// https://www.acmicpc.net/problem/14215
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c;

void Solve()
{
	cin >> a >> b >> c;
	int arr[3] = {a, b, c};
	sort(arr, arr + 3);
	if (arr[0] + arr[1] <= arr[2])
		cout << arr[0] + arr[1] + arr[0] + arr[1] - 1;
	else
		cout << arr[0] + arr[1] + arr[2];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
