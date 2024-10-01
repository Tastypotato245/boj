// https://www.acmicpc.net/problem/2591
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int dp[41];
int arr[41];
string s;

void Solve()
{
	cin >> s;
	for (int i = 0 ; i < s.size() ; ++i)
		arr[i] = s[i] - '0';

	dp[0] = 1;
	for (int i = 1 ; i < s.size() ; ++i)
	{
		if (arr[i - 1] != 0 && arr[i - 1] * 10 + arr[i] <= 34)
		{
			if (i == 1)
				dp[i] = 1;
			else
				dp[i] = dp[i - 2];
		}
		if (arr[i] != 0)
			dp[i] += dp[i - 1];
	}
	cout << dp[s.size() - 1] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
