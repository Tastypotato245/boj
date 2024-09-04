// https://www.acmicpc.net/problem/18186
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long N, B, C;
long long arr[1000001];
long long dp[1000001][3];
long long ans = 0;

void Solve()
{
	cin >> N >> B >> C;
	long long costs[3] = {B, B + C, B + 2 * C};
	for (int i = 1 ; i < N + 1 ; ++i)
		cin >> arr[i];
	if (B <= C)
	{
		for (int i = 1 ; i < N + 1 ; ++i)
			ans += B * arr[i];
		cout << ans << "\n";
		return ;
	}

	for (int i = 1 ; i < N + 1 ; ++i)
	{
		for (int j = 0 ; j < 2 ; ++j)
		{
			long long minv = min(dp[i - 1][j], arr[i]);
			dp[i - 1][j] -= minv;
			arr[i] -= minv;
			dp[i][j + 1] = minv;
		}
		dp[i][0] = arr[i];
	}
	for (int i = 1 ; i < N + 1 ; ++i)
		for (int j = 0 ; j < 3 ; ++j)
			ans += costs[j] * dp[i][j];
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
