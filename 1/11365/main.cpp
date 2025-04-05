// https://www.acmicpc.net/problem/11365
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;

void Solve()
{
	while (true)
	{
		getline(cin, s);
		if (s == "END")
			break ;
		reverse(s.begin(), s.end());
		cout << s << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
