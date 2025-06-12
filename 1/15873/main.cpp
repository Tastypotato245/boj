// https://www.acmicpc.net/problem/15873
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int ab;

void Solve()
{
	cin >> ab;

	if (ab == 1010)
		cout << 20;
	else if (ab / 100 != 0)
	{
		if (ab / 10 == 10)
			cout << 10 + ab % 10;
		else
			cout << ab / 100 + 10;
	}
	else
		cout << ab / 10 + ab % 10;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
