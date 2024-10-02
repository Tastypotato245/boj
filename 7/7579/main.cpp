// https://www.acmicpc.net/problem/7579
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, M;
int dp[10001];
vector<pair<int, int> > v(101);

void Solve()
{
	cin >> N >> M;

	for (int i = 1 ; i <= N ; ++i)
		cin >> v[i].first;
	for (int i = 1 ; i <= N ; ++i)
		cin >> v[i].second;

	for (int i = 1 ; i <= N ; ++i)
		for (int j = 10000 ; j >= v[i].second ; --j)
			dp[j] = max(dp[j], dp[j - v[i].second] + v[i].first);

	for (int i = 0 ; i <= 10000 ; ++i)
		if (dp[i] >= M)
		{
			cout << i << "\n";
			break;
		}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
