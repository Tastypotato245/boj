// https://www.acmicpc.net/problem/2903
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[16];

void Solve()
{
	cin >> N;
	dp[1] = 3;
	for (int i = 2 ; i <= N ; ++i)
		dp[i] = dp[i - 1] * 2 - 1;
	cout << dp[N] * dp[N];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
