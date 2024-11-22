// https://www.acmicpc.net/problem/3151
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
int arr[10000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	sort(arr, arr + N);

	long long ans = 0;
	for (int i = 0 ; i < N ; ++i)
		for (int j = i + 1 ; j < N ; ++j)
		{
			int l = lower_bound(arr + j + 1, arr + N, -(arr[i] + arr[j])) - arr;
			int r = upper_bound(arr + j + 1, arr + N, -(arr[i] + arr[j])) - arr;
			ans += r - l;
		}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
