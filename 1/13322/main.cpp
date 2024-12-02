// https://www.acmicpc.net/problem/13322
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;

void Solve()
{
	cin >> s;
	for (int i = 0 ; i < s.size() ; ++i)
		cout << i << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
