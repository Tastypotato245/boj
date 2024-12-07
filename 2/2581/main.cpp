// https://www.acmicpc.net/problem/2581
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
bool dp[10001];

void Solve()
{
	cin >> M >> N;

	//에라토스
	dp[0] = dp[1] = true;
	for (int i = 2 ; i * i <= 10000 ; ++i)
		for (int j = i * i ; j <= 10000 ; j += i)
			dp[j] = true;

	int ans = 0;
	int mini = 0;
	for (int i = M ; i <= N ; ++i)
	{
		if (!dp[i])
		{
			if (ans == 0)
				mini = i;
			ans += i;
		}
	}
	if (ans == 0)
		cout << -1;
	else
	{
		cout << ans << "\n";
		cout << mini;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
