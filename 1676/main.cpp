// https://www.acmicpc.net/problem/1676

#include <iostream>
#include <algorithm>

using namespace std;

int n;
int cnt_2;
int cnt_5;

void Input()
{
	cin >> n;
}

void Output()
{
	cout << min(cnt_2, cnt_5) << "\n";
}

void Solve()
{
	bool	checker;
	int		tmp;

	for (int i = 2; i <= n; ++i)
	{
		checker = 1;
		tmp = i;
		while (checker)
		{
			checker = 0;
			if (tmp % 2 == 0)
			{
				++cnt_2;
				tmp /= 2;
				checker = 1;
			}
			if (tmp % 5 == 0)
			{
				++cnt_5;
				tmp /= 5;
				checker = 1;
			}
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	Output();
	return (0);
}
