// https://www.acmicpc.net/problem/2744
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;

void Solve()
{
	cin >> s;
	for (char a : s)
		if (a >= 'a' && a <= 'z')
			cout << (char)toupper(a);
		else
			cout << (char)tolower(a);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
