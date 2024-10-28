// https://www.acmicpc.net/problem/14002
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int	N;
int ans = 1;
int dp[1000];
int arr[1000][2];

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		cin >> arr[i][0];
		arr[i][1] = 1;
	}

	fill(dp, dp + 1000, 1);
	for (int i = 1 ; i < N ; ++i)
		for (int j = i - 1 ; j >= 0 ; --j)
		{
			if (arr[i][0] > arr[j][0])
				if (dp[i] < dp[j] + 1)
				{
					dp[i] = dp[j] + 1;
					arr[i][1] = dp[i];
				}
			ans = max(ans, dp[i]);
		}

	stack<int> s;
	int cnt = ans;
	for (int i = N ; i >= 0 ; --i)
	{
		if (cnt == arr[i][1])
		{
			s.push(arr[i][0]);
			cnt--;
		}
	}

	cout << ans << "\n";
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
