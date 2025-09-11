// https://www.acmicpc.net/problem/21964
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int	n;
string s;

void Solve()
{
	cin >> n >> s;
	cout << s.substr(s.size()-5);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
