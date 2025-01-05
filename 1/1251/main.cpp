// https://www.acmicpc.net/problem/1251
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

string s;

void Solve()
{
	cin >> s;

	string min_s = "";
	for (int i = 1 ; i < s.size() - 1 ; ++i)
		for (int j = i + 1 ; j < s.size() ; ++j)
		{
			string a = s.substr(0, i);
			string b = s.substr(i, j - i);
			string c = s.substr(j, s.size() - j);

			reverse(a.begin(), a.end());
			reverse(b.begin(), b.end());
			reverse(c.begin(), c.end());

			string tmp = a + b + c;

			if (min_s == "")
				min_s = tmp;
			else
				min_s = min(min_s, tmp);
		}
	cout << min_s;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
