// https://www.acmicpc.net/problem/10942
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
bool dp[2000][2000];
int arr[2000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	for (int i = 0 ; i < N ; ++i)
	{
		if (i < N - 1 && arr[i] == arr[i + 1])
			dp[i][i + 1] = true;
		dp[i][i] = true;
	}
	for (int i = N - 3 ; i >= 0 ; --i)
		for (int j = 2 ; i + j < N ; ++j)
			if (dp[i + 1][i + j - 1] && arr[i] == arr[i + j])
				dp[i][i + j] = true;
	cin >> M;
	for (int i = 0 ; i < M ; ++i)
	{
		int s, e;
		cin >> s >> e;
		cout << dp[s - 1][e - 1] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
