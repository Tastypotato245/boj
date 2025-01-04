// https://www.acmicpc.net/problem/2752
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	arr[3];

void Solve()
{
	for (int i = 0 ; i < 3 ; ++i)
		cin >> arr[i];
	sort(arr, arr + 3);
	for (int i = 0 ; i < 3 ; ++i)
		cout << arr[i] << " ";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
