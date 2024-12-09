// https://www.acmicpc.net/problem/25192
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int	N, ans;
string s;
set<string> ss;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> s;
		if (s == "ENTER")
		{
			ss.clear();
			continue ;
		}

		if (ss.find(s) == ss.end())
		{
			ss.insert(s);
			++ans;
		}
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
