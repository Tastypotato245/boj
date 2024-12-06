// https://www.acmicpc.net/problem/2941
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;

void Solve()
{
	cin >> s;
	int ans = 0;

	for (int i = 0 ; i < s.size() ; ++i)
	{
		if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-'))
			i++;
		else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
			i += 2;
		else if (s[i] == 'd' && s[i + 1] == '-')
			++i;
		else if (s[i] == 'l' && s[i + 1] == 'j')
			++i;
		else if (s[i] == 'n' && s[i + 1] == 'j')
			++i;
		else if (s[i] == 's' && s[i + 1] == '=')
			i++;
		else if (s[i] == 'z' && s[i + 1] == '=')
			i++;
		++ans;
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
