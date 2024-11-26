// https://www.acmicpc.net/problem/2240
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	T, W, ans;
int jadu[1001];

// 시간, 움직인 횟수, 위치
int dp[1001][32][3];

void Solve()
{
	cin >> T >> W;
	for (int i = 1 ; i <= T ; ++i)
		cin >> jadu[i];

	dp[1][0][1] = (jadu[1] == 1);
	dp[1][1][2] = (jadu[1] == 2);

	ans = max(dp[1][0][1], dp[1][1][2]);
	for (int i = 2 ; i <= T ; ++i)
	{
		for (int j = 0 ; j <= W ; ++j)
		{
			dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][2]) + (jadu[i] == 1);
			dp[i][j][2] = max(dp[i - 1][j - 1][1], dp[i - 1][j][2]) + (jadu[i] == 2);
			ans = max(ans, max(dp[i][j][1], dp[i][j][2]));
		}
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
