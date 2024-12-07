// https://www.acmicpc.net/problem/25305
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, K;

void Solve()
{
	cin >> N >> K;
	int arr[N];
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	sort(arr, arr + N, greater<>());
	cout << arr[K - 1];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
