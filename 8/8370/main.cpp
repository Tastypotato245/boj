// https://www.acmicpc.net/problem/8370
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	n1, k1, n2, k2;

void Solve()
{
	cin >> n1 >> k1 >> n2 >> k2;
	cout << n1 * k1 + n2 * k2;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
