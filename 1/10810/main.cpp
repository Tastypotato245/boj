// https://www.acmicpc.net/problem/10810
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int dp[101];

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < M ; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		for (int j = a ; j <= b ; ++j)
			dp[j] = c;
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
