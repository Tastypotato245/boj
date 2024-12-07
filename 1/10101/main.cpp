// https://www.acmicpc.net/problem/10101
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c;

void Solve()
{
	cin >> a >> b >> c;

	if (a == b && b == c && a == 60)
		cout << "Equilateral";
	else if (a + b + c == 180 && (a == b || b == c || a == c))
		cout << "Isosceles";
	else if (a + b + c == 180 && a != b && b != c && a != c)
		cout << "Scalene";
	else
		cout << "Error";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
