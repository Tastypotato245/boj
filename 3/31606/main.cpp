// https://www.acmicpc.net/problem/31606
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	X, Y;

void Solve()
{
	cin >> X >> Y;
	cout << X + Y + 3;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
