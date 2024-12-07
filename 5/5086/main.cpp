// https://www.acmicpc.net/problem/5086
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b;

void Solve()
{
	while(1)
	{
		cin >> a >> b;

		if (a == 0 && b == 0)
			break ;
		if (a < b && b % a == 0)
			cout << "factor\n";
		else if (a >= b && a % b == 0)
			cout << "multiple\n";
		else
			cout << "neither\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
