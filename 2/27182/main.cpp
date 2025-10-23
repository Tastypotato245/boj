// https://www.acmicpc.net/problem/27182
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	X, Y;

void Solve()
{
	cin >> X >> Y;
	if (X > 7)
		cout << X - 7;
	else
		cout << Y + 7;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
