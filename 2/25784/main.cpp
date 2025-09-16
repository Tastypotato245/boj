// https://www.acmicpc.net/problem/25784
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;

void Solve()
{
	cin >> a >> b >> c;
	if (a + b == c || b + c == a || c + a == b)
		cout << 1;
	else if (a * b == c || b * c == a || c * a == b)
		cout << 2;
	else
		cout << 3;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
