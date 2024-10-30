// https://www.acmicpc.net/problem/17845
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, K;
int dp[10001]; // 공부시간 인덱스, 최대 가능한 과목 중요도

void Solve()
{
	cin >> N >> K;
	vector<pair<int, int> > v(K);

	for (int i = 0 ; i < K ; ++i)
		cin >> v[i].first >> v[i].second;
	
	for (int i = 0 ; i < v.size() ; ++i)
		for (int j = N ; j >= v[i].second ; --j)
			dp[j] = max(dp[j], dp[j - v[i].second] + v[i].first);

	cout << dp[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
