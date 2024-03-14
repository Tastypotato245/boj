// https://www.acmicpc.net/problem/6064
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	T;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return (a);
}

int lcm(int a, int b)
{
	return (a * b / gcd(a, b));
}

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		int M, N, x, y;
		cin >> M >> N >> x >> y;
		int tmp = lcm(M, N);
		int j = x;
		for (; j <= tmp; j += M)
		{
			int tar = (j % N == 0) ? N : j % N;
			if (tar == y)
				break ;
		}
		if (j > tmp)
			cout << "-1\n";
		else
			cout << j << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
