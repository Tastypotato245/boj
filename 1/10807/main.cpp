// https://www.acmicpc.net/problem/10807
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int dp[201];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int a;
		cin >> a;
		dp[a + 100]++;
	}
	int v;
	cin >> v;
	cout << dp[v + 100];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
