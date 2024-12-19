// https://www.acmicpc.net/problem/2559
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, K, ans = -1000000000;
int arr[100001];

void Solve()
{
	cin >> N >> K;
	for (int i = 1 ; i <= N ; ++i)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	for (int i = K ; i <= N ; ++i)
		ans = max(ans, arr[i] - arr[i - K]);
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
