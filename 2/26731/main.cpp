// https://www.acmicpc.net/problem/26731
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	string str; cin >> str;

	for (char c = 'A'; c <= 'Z'; c++)
	{
		if (str.find(c) == string::npos)
		{
			cout << c << "\n";
			break ;
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
