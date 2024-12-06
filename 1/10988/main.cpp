// https://www.acmicpc.net/problem/10988
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;

void Solve()
{
	cin >> s;
	bool isPal = true;
	for (int i = 0 ; i < s.size() / 2 ; ++i)
	{
		if (s[i] != s[s.size() - 1 - i])
		{
			isPal = false;
			break ;
		}
	}
	cout << isPal;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
