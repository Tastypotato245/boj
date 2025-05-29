// https://www.acmicpc.net/problem/13866
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	A, B, C, D;

void Solve()
{
	cin >> A >> B >> C >> D;
	cout << abs((A + D) - (B + C));
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
