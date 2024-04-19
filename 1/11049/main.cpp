// https://www.acmicpc.net/problem/11049
// github/Tastypotato245
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int	N;
int dp[500][500];

void Solve()
{
	cin >> N;
	vector<pair<int, int> > v(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> v[i].first >> v[i].second;
	for (int x = 1 ; x < N ; ++x)
		for (int y = x - 1 ; y >= 0 ; --y)
		{
			dp[y][x] = INT_MAX;
			for (int k = y ; k < x ; ++k)
				dp[y][x] = min(dp[y][x],
					dp[y][k] + dp[k + 1][x] + v[y].first * v[k].second * v[x].second);
		}
	cout << dp[0][N - 1] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
