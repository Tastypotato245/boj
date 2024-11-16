// https://www.acmicpc.net/problem/1912
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, ans;
int arr[100001];
int dp[100001];

void Solve()
{
	cin >> N;

	for (int i = 1 ; i <= N ; ++i)
		cin >> arr[i];

	ans = arr[1];
	for (int i = 1 ; i <= N ; ++i)
	{
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
		ans = max(dp[i], ans);
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
