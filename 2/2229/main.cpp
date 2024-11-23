// https://www.acmicpc.net/problem/2229
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;
int arr[1000];
int dp[1000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	for (int i = 1 ; i < N ; ++i)
		for (int j = 0 ; j <= i ; ++j)
		{
			if (j == 0)
				dp[i] = max(abs(arr[i] - arr[j]), dp[i]);
			else
				dp[i] = max(dp[j - 1] + abs(arr[i] - arr[j]), dp[i]);
		}
	cout << dp[N - 1] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
