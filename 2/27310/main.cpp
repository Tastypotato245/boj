// https://www.acmicpc.net/problem/27310
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;
int cnt;

void Solve()
{
	cin >> s;

	for (auto& l : s)
		if (l == '_')
			cnt++;

	cout << s.length() + 2 + cnt * 5;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
