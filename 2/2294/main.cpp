// https://www.acmicpc.net/problem/2294

#include <iostream>
#include <algorithm>
#include <vector>

#define MAX_K 10001

using namespace std;

int	N;
int K;
vector<int> v;
vector<int> dp(MAX_K);

void Input()
{
	int tmp;
	cin >> N;
	cin >> K;
	for (int i = 0; i < N; ++i)
	{
		cin >> tmp;
		v.push_back(tmp);
		dp[tmp] = 1;
	}
}

void Solve()
{
	for (int i = 1; i <= K; ++i)
	{
		if (dp[i] == 0)
			dp[i] = -1;
		else if (dp[i] > 0)
		{
			for (int j = 0; j < N; ++j)
			{
				if (i + v[j] <= K)
				{
					if (dp[i + v[j]] == 0)
						dp[i + v[j]] = dp[i] + 1;
					else
						dp[i + v[j]] = min(dp[i + v[j]], dp[i] + 1);
				}
			}
		}
	}
}

void Output()
{
	cout << dp[K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	Output();
	return (0);
}
