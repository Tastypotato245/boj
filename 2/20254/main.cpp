// https://www.acmicpc.net/problem/20254
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c, d;

void Solve()
{
	cin >> a >> b >> c >> d;
	cout << 56 * a + 24 * b + 14 * c + 6 * d;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
