// https://www.acmicpc.net/problem/15486
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[1500001][2];
int dp[1500001];

void Solve()
{
	cin >> N;

	for (int i = 1 ; i <= N ; ++i)
		cin >> arr[i][0] >> arr[i][1];

	for (int i = 1 ; i <= N ; ++i)
	{
		dp[i] = max(dp[i], dp[i - 1]);
		int target_date = i + arr[i][0] - 1;
		if (target_date <= N)
			dp[target_date] = max(dp[target_date], dp[i - 1] + arr[i][1]);
	}
	cout << *max_element(dp, dp + 1500001) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
