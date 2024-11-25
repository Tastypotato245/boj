// https://www.acmicpc.net/problem/1411_6
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M, K;
bool board[2500][2500];

// 상좌
int dp[2500][2500][2];

bool isShip(int i, int j)
{
	for (int q = 0 ; q < 4 ; ++q)
	{
		//상좌하우
		if (q == 0)
		{
			if (dp[i][j][0] - 1 < K)
				return false;
		}
		else if (q == 1)
		{
			if (dp[i][j][1] - 1 < K)
				return false;
		}
		else if (q == 2)
		{
			if (dp[i + K][j][0] - 1 < K)
				return false;
		}
		else if (q == 3)
		{
			if (dp[i][j + K][1] - 1 < K)
				return false;
		}
	}
	return true;
}

void Solve()
{
	cin >> N >> M >> K;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
		{
			cin >> board[i][j];
			if (board[i][j])
			{
				dp[i][j][0] = 1;
				dp[i][j][1] = 1;
			}
		}

	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
		{
			if (board[i][j])
			{
				if (i > 0)
					dp[i][j][0] = dp[i - 1][j][0] + 1;
				if (j > 0)
					dp[i][j][1] = dp[i][j - 1][1] + 1;
			}
		}

//	for (int i = 0 ; i < N ; ++i)
//	{
//		for (int j = 0 ; j < M ; ++j)
//		{
//			for (int q = 0 ; q < 2 ; ++q)
//				cout << dp[i][j][q];
//			cout << " ";
//		}
//		cout << "\n";
//	}

	int ans = 0;
	for (int i = K ; i < N - K ; ++i)
		for (int j = K ; j < M - K ; ++j)
			if (board[i][j] && isShip(i, j))
				++ans;
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
