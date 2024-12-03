// https://www.acmicpc.net/problem/10813
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int dp[101];

void Solve()
{
	cin >> N >> M;
	for (int i = 1 ; i <= N ; ++i)
		dp[i] = i;
	for (int i = 0 ; i < M ; ++i)
	{
		int a, b;
		cin >> a >> b;
		int tmp = dp[a];
		dp[a] = dp[b];
		dp[b] = tmp;
	}
	for (int i = 1 ; i <= N ; ++i)
		cout << dp[i] << " ";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
