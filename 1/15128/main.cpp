// https://www.acmicpc.net/problem/15128
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long	p1, q1, p2, q2;

void Solve()
{
	cin >> p1 >> q1 >> p2 >> q2;
	cout << (bool)(p1 * p2 % (q1 * q2 * 2) == 0);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
