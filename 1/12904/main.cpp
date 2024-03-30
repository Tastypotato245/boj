// https://www.acmicpc.net/problem/12904
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


void Solve()
{
	string s, t;
	cin >> s >> t;
	int len = t.size() - s.size();
	for (int i = 0; i < len; ++i)
	{
		if (t.back() == 'A')
			t.pop_back();
		else if (t.back() == 'B')
		{
			t.pop_back();
			reverse(t.begin(), t.end());
		}
	}
	if (s == t)
		cout << "1\n";
	else
		cout << "0\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
