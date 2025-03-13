// https://www.acmicpc.net/problem/30224
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

bool contain_7(int a)
{
	while (a)
	{
		if (a % 10 == 7)
			return true;
		a /= 10;
	}
	return false;
}

void Solve()
{
	cin >> N;

	if (!contain_7(N))
	{
		if (N % 7 != 0)
			cout << 0;
		else
			cout << 1;
	}
	else
	{
		if (N % 7 != 0)
			cout << 2;
		else
			cout << 3;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
