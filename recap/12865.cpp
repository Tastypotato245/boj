// https://www.acmicpc.net/problem/12865
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N, K;

//w, v
pair<int, int> products[101];
int dp[100001];

void Solve()
{
	cin >> N >> K;
	for (int i = 1 ; i <= N ; ++i)
		cin >> products[i].first >> products[i].second;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = K ; j >= products[i].first ; --j)
			dp[j] = max(dp[j], dp[j - products[i].first] + products[i].second);
	cout << dp[K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
