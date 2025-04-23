// https://www.acmicpc.net/problem/5358
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;

void Solve()
{
	while (getline(cin, s))
	{
		for (int i = 0 ; i < s.size() ; ++i)
		{
			if (s[i] == 'e')
				cout << 'i';
			else if (s[i] == 'i')
				cout << 'e';
			else if (s[i] == 'E')
				cout << 'I';
			else if (s[i] == 'I')
				cout << 'E';
			else
				cout << s[i];
		}
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
