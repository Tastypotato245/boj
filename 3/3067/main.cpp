// https://www.acmicpc.net/problem/3067
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T, N;

void Solve()
{
	cin >> T;

	for (int t = 0 ; t < T ; ++t)
	{
		cin >> N;
		int arr[N];
		for (int n = 0 ; n < N ; ++n)
			cin >> arr[n];
		int cost;
		cin >> cost;
		int dp[cost + 1];
		fill(dp, dp + cost + 1, 0);
		dp[0] = 1;
		for (int i = 0 ; i < N ; ++i)
			for (int j = 0 ; j <= cost ; ++j)
				if (j + arr[i] <= cost)
					dp[j + arr[i]] += dp[j];
		cout << dp[cost] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
