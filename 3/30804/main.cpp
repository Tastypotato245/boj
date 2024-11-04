// https://www.acmicpc.net/problem/
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, ans = 0;
int arr[200001];
int dp[200001][10];

void Solve()
{
	cin >> N;
	vector<int> v;
	for (int i = 1 ; i <= N ; ++i)
	{
		cin >> arr[i];
		for (int j = 1 ; j < 10 ; ++j)
			dp[i][j] = dp[i - 1][j];
		dp[i][arr[i]]++;
	}

	int l = 0;
	int r = 1;
	while (r <= N)
	{
		int cnt = 0;
		for (int j = 1 ; j < 10 ; ++j)
			if (dp[r][j] - dp[l][j] != 0)
				++cnt;
		if (cnt <= 2)
		{
			ans = max(ans, r - l);
			++r;
		}
		else
			++l;
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
