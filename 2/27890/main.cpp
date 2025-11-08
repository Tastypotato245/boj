// https://www.acmicpc.net/problem/27890
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int x, n;
	cin >> x >> n;

	for (int i = 0; i < n; i++)
	{
		if (x % 2 == 0)
			x = (x / 2) ^ 6;
		else
			x = (2 * x) ^ 6;
	}

	cout << x;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
