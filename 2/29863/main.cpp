// https://www.acmicpc.net/problem/29863
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b;

void Solve()
{
	cin >> a >> b;
	cout << b + (a >= 20 ? 24 : 0) - a;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
