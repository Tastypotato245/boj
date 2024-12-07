// https://www.acmicpc.net/problem/1085
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	x, y, w, h;

void Solve()
{
	cin >> x >> y >> w >> h;
	cout << min(min(x, w - x), min(y, h - y));
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
