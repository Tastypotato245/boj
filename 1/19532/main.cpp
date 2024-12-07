// https://www.acmicpc.net/problem/19532
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c, d, e, f;

void Solve()
{
	cin >> a >> b >> c >> d >> e >> f;

	for (int x = -999 ; x <= 999 ; ++x)
		for (int y = -999 ; y <= 999 ; ++y)
			if (a*x + b*y == c && d*x + e*y == f)
			{
				cout << x << " " << y;
				return ;
			}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
