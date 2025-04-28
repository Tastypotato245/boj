// https://www.acmicpc.net/problem/6764
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c, d;

void Solve()
{
	cin >> a >> b >> c >> d;

	if (a == b && b == c && c == d)
		cout << "Fish At Constant Depth";
	else if (a < b && b < c && c < d)
		cout << "Fish Rising";
	else if (a > b && b > c && c > d)
		cout << "Fish Diving";
	else
		cout << "No Fish";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
