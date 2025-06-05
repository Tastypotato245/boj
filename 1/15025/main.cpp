// https://www.acmicpc.net/problem/15025
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	l, r;

void Solve()
{
	cin >> l >> r;

	if (l == 0 && r == 0)
		cout << "Not a moose";
	else if (l == r)
		cout << "Even " << l + r;
	else
		cout << "Odd " << max(l, r) * 2;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
