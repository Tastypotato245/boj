// https://www.acmicpc.net/problem/2231

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Input()
{
	cin >> N;
}

void Solve()
{
	int sum = 0;
	int tmp;
	int i;

	for (i = 1; i <= N; ++i)
	{
		tmp = i;
		sum = tmp;
		while (tmp)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == N)
		{
			cout << i << "\n";
			return ;
		}
		sum = 0;
	}
	cout << "0" << "\n";
}


int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	return (0);
}
