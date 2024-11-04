// https://www.acmicpc.net/problem/12852
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[1000001];
int shortest[1000001];

void Solve()
{
	cin >> N;

	fill(dp, dp + 1000001, 1000000);
	dp[1] = 0;
	for (int i = 1 ; i < N ; ++i)
	{
		if (i * 3 <= N)
			if (dp[i * 3] > dp[i] + 1)
			{
				dp[i * 3] = dp[i] + 1;
				shortest[i * 3] = i;
			}
		if (i * 2 <= N)
			if (dp[i * 2] > dp[i] + 1)
			{
				dp[i * 2] = dp[i] + 1;
				shortest[i * 2] = i;
			}
		if (i + 1 <= N)
			if (dp[i + 1] > dp[i] + 1)
			{
				dp[i + 1] = dp[i] + 1;
				shortest[i + 1] = i;
			}
	}
	cout << dp[N] << "\n";

//	for (int i = 1 ; i < N ; ++i)
//		cout << dp[i] << ", " << shortest[i] << "\n";

	int tmp = N;
	while (tmp != 0)
	{
		cout << tmp << " ";
		tmp = shortest[tmp];
	}
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
