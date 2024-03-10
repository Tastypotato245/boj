// https://www.acmicpc.net/problem/9095
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	T;
int	N;
int dp[11];

void Solve()
{
	cin >> T;
	dp[0] = 1;
	for (int j = 1 ; j < 11 ; ++j)
		for (int k = 1 ; k <= 3 ; ++k)
			if (j - k >= 0)
				dp[j] += dp[j - k];
	for (int i = 0 ; i < T ; ++i)
	{
		cin >> N;
		cout << dp[N] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
