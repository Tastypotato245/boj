// https://www.acmicpc.net/problem/25591
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int n1, n2, a, b, c, d, q, r;
	cin >> n1 >> n2;
	a = 100 - n1;
	b = 100 - n2;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100;
	r = d % 100;
	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
	cout << c + q << ' ' << r << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
