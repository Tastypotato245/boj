// https://www.acmicpc.net/problem/9772
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double x, y;

void Solve()
{
	while (true)
	{
		cin >> x >> y;
		if (x == 0 && y == 0)
		{
			cout << "AXIS\n";
			break ;
		}

		if (x == 0 || y == 0)
			cout << "AXIS\n";
		else if (x > 0 && y > 0)
			cout << "Q1\n";
		else if (x < 0 && y > 0)
			cout << "Q2\n";
		else if (x < 0 && y < 0)
			cout << "Q3\n";
		else if (x > 0 && y < 0)
			cout << "Q4\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
