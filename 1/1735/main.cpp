// https://www.acmicpc.net/problem/1735
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int	A1, B1;
int	A2, B2;

void Solve()
{
	cin >> A1 >> B1;
	cin >> A2 >> B2;

	cout << (A1 * B2 + A2 * B1) / gcd(A1 * B2 + A2 * B1, B1 * B2) << " " << B1 * B2 / gcd(A1 * B2 + A2 * B1, B1 * B2);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
