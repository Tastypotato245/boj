// https://www.acmicpc.net/problem/15964
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long	a, b;

void Solve()
{
	cin >> a >> b;
	cout << (a + b) * (a - b);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
