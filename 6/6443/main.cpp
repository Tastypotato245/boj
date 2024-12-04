// https://www.acmicpc.net/problem/6443
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	N;
int vis[26];
string s;

void dfs(string now_string, int now_size)
{
	for (int i = 0 ; i < 26 ; ++i)
	{
		if (vis[i] == 0)
			continue ;
		vis[i]--;
		now_string[now_size] = 'a' + i;
		if (now_size + 1 == s.size())
			cout << now_string << "\n";
		else
			dfs(now_string, now_size + 1);
		vis[i]++;
	}
}

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> s;
		fill(vis, vis + 26, 0);
		for (int i = 0 ; i < s.size() ; ++i)
			vis[s[i] - 'a']++;
		dfs(s, 0);
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
