// https://www.acmicpc.net/problem/2293
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int	K;

int dp[10001];
void Solve()
{
	cin >> N;
	int coins[N];
	cin >> K;
	for (int i = 0 ; i < N ; ++i)
		cin >> coins[i];
	for (int i = 0 ; i <= K ; ++i)
		for (int j = 0; j < N ; ++j)
		{
			if (i == 0)
				dp[i + coins[j]] = 1;
			else if (i + coins[j] <= K)
				dp[i + coins[j]] += dp[i];
		}
	cout << dp[K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
