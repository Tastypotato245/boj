// https://www.acmicpc.net/problem/11931
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, arr[1000000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	sort(arr, arr + N, greater<int>());
	for (int i = 0 ; i < N ; ++i)
		cout << arr[i] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
