// https://www.acmicpc.net/problem/2156
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[10001];
int arr[10001];

void Solve()
{
	cin >> N;

	for (int i = 1 ; i <= N ; ++i)
		cin >> arr[i];

	dp[1] = arr[1];
	dp[2] = dp[1] + arr[2];
	for (int i = 3 ; i <= N ; ++i)
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], max(dp[i - 2] + arr[i], dp[i - 1]));
	cout << dp[N];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}