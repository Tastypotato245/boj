// https://www.acmicpc.net/problem/2482
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

#define MAX_N 1000
#define DIV 1000000003

using namespace std;

int N, K;
long long ans = 0;
int dp[1001][1001];

void Solve()
{
	cin >> N >> K;

	for (int i = 1 ; i <= N ; ++i)
		dp[1][i] = i;
	for (int i = 2 ; i <= N ; ++i)
		for (int j = i * 2 ; j <= N ; ++j)
			dp[i][j] = (dp[i - 1][j - 2] + dp[i][j - 1]) % DIV;
	cout << dp[K][N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
