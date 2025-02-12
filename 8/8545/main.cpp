// https://www.acmicpc.net/problem/8545
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string	s;

void Solve()
{
	cin >> s;
	reverse(s.begin(), s.end());
	cout << s;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
