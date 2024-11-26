// https://www.acmicpc.net/problem/1441_1
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[101];

void Solve()
{
	cin >> N;

	for (int i = 1 ; i <= 9 ; ++i)
		for (int j = 1 ; j <= 9 ; ++j)
		{
			dp[i] = true;
			dp[j] = true;
			dp[i * j] = true;
		}

	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
