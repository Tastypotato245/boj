// https://www.acmicpc.net/problem/11055
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[1000];
int dp[1000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> arr[i];
		dp[i] = arr[i];
	}

	for (int i = 1 ; i < N ; ++i)
		for (int j = i - 1 ; j >= 0 ; --j)
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + arr[i]);
	cout << dp[max_element(dp, dp + N) - dp] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
