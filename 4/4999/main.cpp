// https://www.acmicpc.net/problem/4999
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string a, b;

void Solve()
{
	cin >> a >> b;
	cout << (a.size() >= b.size() ? "go" : "no") << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
