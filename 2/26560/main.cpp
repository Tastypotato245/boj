// https://www.acmicpc.net/problem/26560
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int T;
string s;

void Solve()
{
	getline(cin, s);

	T = stoi(s);
	while (T--)
	{
		getline(cin, s);

		if (s.back() != '.')
			s += ".";
		cout << s << '\n';
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
