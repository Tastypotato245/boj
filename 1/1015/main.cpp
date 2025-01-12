// https://www.acmicpc.net/problem/1015
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[50];
int dp[1001];
int ans[1001];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> arr[i];
		ans[arr[i]]++;
	}
	dp[1] = ans[0];
	for (int i = 2 ; i <= 1000 ; ++i)
		dp[i] = dp[i - 1] + ans[i - 1];
	for (int i = 0 ; i < N ; ++i)
		cout << dp[arr[i]]++ << " ";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
