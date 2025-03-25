// https://www.acmicpc.net/problem/1343
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
string ans;

void Solve()
{
	cin >> s;

	int i = 0;
	while (i < s.size())
	{
		if (i + 3 < s.size() && 
				s[i] == 'X' &&
				s[i + 1] == 'X' &&
				s[i + 2] == 'X' &&
				s[i + 3] == 'X')
		{
			s[i] = s[i + 1] = s[i + 2] = s[i + 3] = 'A';
			i += 4;
		}
		else if (i + 1 < s.size() &&
				s[i] == 'X' &&
				s[i + 1] == 'X')
		{
			s[i] = s[i + 1] = 'B';
			i += 2;
		}
		else if (s[i] == '.')
			++i;
		else
		{
			cout << "-1";
			return ;
		}
	}
	cout << s;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
