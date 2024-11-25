// https://www.acmicpc.net/problem/11062
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T;
int arr[1000];
int dp[1000][1000];

int game(int l, int r, int i)
{
	if (l > r)
		return 0;
	if (dp[l][r])
		return (dp[l][r]);
	if (i % 2 == 0) // 근
		return dp[l][r] = max(
				arr[l] + game(l + 1, r, i + 1),
				arr[r] + game(l, r - 1, i + 1));
	else
		return dp[l][r] = min(
				game(l + 1, r, i + 1),
				game(l, r - 1, i + 1));
}

void Solve()
{
	cin >> T;

	for (int t = 0 ; t < T ; ++t)
	{
		int N;
		cin >> N;
		for (int i = 0 ; i < N ; ++i)
		{
			cin >> arr[i];
			fill(dp[i], dp[i] + N, 0);
		}
		game(0, N - 1, 0);
		cout << dp[0][N - 1] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
