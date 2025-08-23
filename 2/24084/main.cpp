// https://www.acmicpc.net/problem/24084
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int slen; string s;

void Solve()
{
	cin >> slen >> s;
	for (int i = 1; i < slen; i++)
	{
		if (s[i] == 'J')
			cout << s[i - 1] << '\n';
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
