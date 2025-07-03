// https://www.acmicpc.net/problem/17548
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;

void Solve()
{
	cin >> s;

	for (int i = 0 ; i < s.size() ; ++i)
	{
		cout << s[i];
		if (s[i] == 'e')
			cout << 'e';
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
