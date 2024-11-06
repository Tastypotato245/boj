// https://www.acmicpc.net/problem/2217
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[100000];
int ans[100000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	sort(arr, arr + N);
	for (int i = 0 ; i < N ; ++i)
		ans[i] = arr[i] * (N - i);
	cout << ans[max_element(ans, ans + N) - ans] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
