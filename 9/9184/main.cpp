// https://www.acmicpc.net/problem/9184
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int dp[101][101][101];
bool vis[101][101][101];

int w(int a, int b, int c)
{
	if (vis[a + 50][b + 50][c + 50])
		return (dp[a + 50][b + 50][c + 50]);

	vis[a + 50][b + 50][c + 50] = true;

	if (a <= 0 | b <= 0 | c <= 0)
		return (dp[a + 50][b + 50][c + 50] = 1);
	if (a > 20 | b > 20 | c > 20)
		return (dp[a + 50][b + 50][c + 50]
				= w(20, 20, 20));
	if (a < b && b < c)
		return (dp[a + 50][b + 50][c + 50]
				= w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c));
	return (dp[a + 50][b + 50][c + 50]
				= w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1));
}

void Solve()
{
	while (1)
	{
		int	a, b, c;
		cin >> a >> b >> c;
		if (a == b && b == c && a == -1)
			break ;
		else
			printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
