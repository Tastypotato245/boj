// https://www.acmicpc.net/problem/1312
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, n;

void Solve()
{
	cin >> a >> b >> n;

	if (a % b == 0)
	{
		cout << 0;
		return ;
	}

	if (a > b)
		a %= b;

	int now = 0;
	int i = 0;
	while (i++ < n)
	{
		a *= 10;
		now = (int)(a / b);
		a %= b;
	}
	cout << now;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
