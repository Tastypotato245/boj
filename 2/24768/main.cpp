// https://www.acmicpc.net/problem/24768
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int x, y;

	cin >> x >> y;
	while (x + y)
	{
		if (x + y == 13)
			cout << "Never speak again.\n";
		else if (x > y)
			cout << "To the convention.\n";
		else if (x < y)
			cout << "Left beehind.\n";
		else
			cout << "Undecided.\n";

		cin >> x >> y;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
