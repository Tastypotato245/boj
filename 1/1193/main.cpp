// https://www.acmicpc.net/problem/1193
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	X;

void Solve()
{
	cin >> X;
	int i, j;

	int line = 1;
	while (X - line > 0)
	{
		X -= line;
		line++;
	}
	if (line % 2)
		cout << line + 1 - X << '/' << X;
	else
		cout << X << '/' << line + 1 - X;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
