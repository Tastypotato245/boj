// https://www.acmicpc.net/problem/25828
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int g, p, t;
	cin >> g >> p >> t;

	int group = g + p * t;
	int one = g*p;

	if (one < group)
		cout << 1;
	else if (one > group)
		cout << 2;
	else
		cout << 0;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
