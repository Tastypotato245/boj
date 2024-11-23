// https://www.acmicpc.net/problem/1509
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>
#define INF 1000000000

using namespace std;

string s;
bool dp[2500][2500];
int result[2500];
int ans = 0;

// dp
void Solve()
{
	// s 입력
	cin >> s;
	int N = s.size();
	// dp table 생성하기 like 10942
	for (int i = 0 ; i < N ; ++i)
	{
		if (i < N - 1 && s[i] == s[i + 1])
			dp[i][i + 1] = true;
		dp[i][i] = true;
	}

	for (int i = N - 2 ; i >= 0 ; --i)
		for (int j = 2 ; i + j < N ; ++j)
			if (dp[i + 1][i + j - 1] && s[i] == s[i + j])
				dp[i][i + j] = true;

	for (int i = 0 ; i < N ; ++i)
	{
		result[i] = INF;
		for (int j = 0 ; j <= i ; ++j)
			if (dp[j][i])
				result[i] = min(result[i], result[j - 1] + 1);
	}
	
	cout << result[N - 1] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
