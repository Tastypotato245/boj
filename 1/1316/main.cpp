// https://www.acmicpc.net/problem/1316
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	N, ans;
string s;
bool alpha[26];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> s;
		char now = s[0];
		fill_n(alpha, 26, false);
		bool no = false;
		for (char c : s)
		{
			if (alpha[c - 'a'])
			{
				no = true;
				break ;
			}
			if (now != c)
				alpha[now - 'a'] = true;
			now = c;
		}
		if (!no)
			++ans;
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
