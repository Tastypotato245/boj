// https://www.acmicpc.net/problem/5717
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b;

void Solve()
{
	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break ;
		cout << a + b << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
