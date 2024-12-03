// https://www.acmicpc.net/problem/10811
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

		for (int j = 0 ; j <= (b - a) / 2 ; ++j)
		{
			int tmp = dp[a + j];
			dp[a + j] = dp[b - j];
			dp[b - j] = tmp;
		}
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
