// https://www.acmicpc.net/problem/12865
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N, K, W = 0;
int dp[100001];

void Solve()
{
	cin >> N >> K;
	for (int i = 0 ; i < N ; ++i)
	{
		int w;
		cin >> w >> dp[w];
	}
	for (int i = 1 ; i <= K ; ++i)
	{
	}
	cout << "\n";
	for (int i = 1 ; i <= K ; ++i)
		cout << dp[i] << "\n";
	cout << "\n";
	cout << dp[K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
