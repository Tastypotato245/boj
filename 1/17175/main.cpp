// https://www.acmicpc.net/problem/17175
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[51];

void Solve()
{
	cin >> N;
	
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2 ; i <= N ; ++i)
		dp[i] = (dp[i - 1] + dp[i - 2] + 1) % 1000000007;
	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
