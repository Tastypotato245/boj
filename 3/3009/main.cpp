// https://www.acmicpc.net/problem/3009
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct Point
{
	int x;
	int y;
}point;

point a, b, c;

void Solve()
{
	cin >> a.x >> a.y;
	cin >> b.x >> b.y;
	cin >> c.x >> c.y;
	// x
	if (a.x == b.x)
		cout << c.x;
	else if (a.x == c.x)
		cout << b.x;
	else
		cout << a.x;
	cout << " ";
	//y
	if (a.y == b.y)
		cout << c.y;
	else if (a.y == c.y)
		cout << b.y;
	else
		cout << a.y;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
