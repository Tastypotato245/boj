// https://www.acmicpc.net/problem/1074

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;
int r;
int c;
long long ans;

void Input()
{
	cin >> N;
	cin >> r;
	cin >> c;
}

int Where()
{
	long long len_half = pow(2, N - 1);
	if (r < len_half && c < len_half)
	{
		return (0);
	}
	else if (r < len_half && c >= len_half)
	{
		c -= len_half;
		return (1);
	}
	else if (r >= len_half && c < len_half)
	{
		r -= len_half;
		return (2);
	}
	else if (r >= len_half && c >= len_half)
	{
		r -= len_half;
		c -= len_half;
		return (3);
	}
	return (-100);
}

void Solve()
{
	while (N)
	{
		long long part = pow(4, N - 1);
		int tmp = Where();
		for (int i = 0; i < tmp; ++i)
			ans += part;
		--N;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	cout << ans << "\n";
	return (0);
}
