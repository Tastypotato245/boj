// https://www.acmicpc.net/problem/11283
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
string s;

void Solve()
{
	cin >> s;
	N = ((s[0] & 255) - 234) * 4096 + ((s[1] & 255) - 176) * 64 + ((s[2] & 255) - 127);
	cout << N;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
