// https://www.acmicpc.net/problem/2565
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
vector<pair<int, int> > v;
int dp[100];

void Solve()
{
	cin >> N;
	v.resize(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end());

	for (int i = 0 ; i < N ; ++i)
	{
		dp[i] = 1;
		for (int j = i - 1 ; j >= 0 ; --j)
			if (v[j].second < v[i].second)
				dp[i] = max(dp[i], dp[j] + 1);
	}
	cout << N - dp[max_element(dp, dp + N) - dp] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
