// https://www.acmicpc.net/problem/85431
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c;

void Solve()
{
	cin >> a >> b >> c;
	cout << (a + 1) * (b + 1) / (c + 1) - 1;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
