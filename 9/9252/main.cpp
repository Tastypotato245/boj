// https://www.acmicpc.net/problem/9252
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int dp[1001][1001];
int ans;
string a, b;

void Solve()
{
	cin >> a >> b;

	for (int i = 1 ; i <= a.size() ; ++i)
		for (int j = 1 ; j <= b.size() ; ++j)
		{
			if (a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}

	int ans = dp[a.size()][b.size()];
	cout << ans << "\n";

	stack<char> s;

	if (ans == 0)
		return ;
	int i = a.size(), j = b.size();
	s.push(b[j]);
	while (i != 0 && j != 0)
	{
		if (dp[i][j] == dp[i - 1][j])
			i--;
		else if (dp[i][j] == dp[i][j - 1])
			j--;
		else
		{
			i--;
			j--;
			s.push(b[j]);
		}
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
