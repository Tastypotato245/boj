// https://www.acmicpc.net/problem/1264
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


void Solve()
{
	while (true)
	{
		char s[256] = "";
		cin.getline(s, 256);
		int ans = 0;
		if (s[0] == '#')
			break ;

		for (auto c : s)
			if (	c == 'a' || c == 'A' ||
					c == 'e' || c == 'E' ||
					c == 'i' || c == 'I' ||
					c == 'o' || c == 'O' ||
					c == 'u' || c == 'U')
				++ans ;
		cout << ans << "\n";
	}

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
