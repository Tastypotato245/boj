// https://www.acmicpc.net/problem/15000
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;

void Solve()
{
	cin >> s;
	for (auto &c : s)
		c = c - 'a' + 'A';
	cout << s;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
