// https://www.acmicpc.net/problem/1411_3
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long N, K;
long long arr[200000];
long long dp[200000];
long long back_arr[200000];
long long back_dp[200000];

// maybe, 누적합
void Solve()
{
	cin >> N >> K;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> arr[i];
		back_arr[(N - 1) - i] = arr[i];
	}
	dp[0] = arr[0];
	back_dp[0] = back_arr[0];
	for (int i = 1 ; i < N ; ++i)
	{
		dp[i] = dp[i - 1] + arr[i];
		back_dp[i] = back_dp[i - 1] + back_arr[i];
	}

	// 거리 K 내에 최댓값 dp
	long long ans = 0;
	for (long long i = 0 ; i < min(K, N) ; ++i)
	{
		if (i == 0)
		{
			ans = max(ans, 0 + arr[i] * (K - i));
			ans = max(ans, 0 + back_arr[i] * (K - i));
		}
		else
		{
			ans = max(ans, dp[i - 1] + arr[i] * (K - i));
			ans = max(ans, back_dp[i - 1] + back_arr[i] * (K - i));
		}
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
