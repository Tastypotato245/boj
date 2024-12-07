// https://www.acmicpc.net/problem/24313
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a1, a0;
int c, n0;

void Solve()
{
	cin >> a1 >> a0;
	cin >> c >> n0;
	cout << (a1 * n0 + a0 <= c * n0 && a1 <= c);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
