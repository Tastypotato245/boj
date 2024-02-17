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
	dp[0] = 1;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 1; j <= K ; ++j)
			if (j - coins[i] >= 0)
				dp[j] += dp[j - coins[i]];
	cout << dp[K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
