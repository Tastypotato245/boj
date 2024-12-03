// https://www.acmicpc.net/problem/5597
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[31];

void Solve()
{
	for (int i = 0 ; i < 28 ; ++i)
	{
		cin >> N;
		dp[N]++;
	}
	for (int i = 1 ; i <= 30 ; ++i)
		if (!dp[i])
			cout << i << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
