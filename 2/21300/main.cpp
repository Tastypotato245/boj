// https://www.acmicpc.net/problem/21300
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c, d, e, f;

void Solve()
{
	cin >> a >> b >> c >> d >> e >> f;
	cout << 5 * (a + b + c + d + e + f);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
