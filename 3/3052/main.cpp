// https://www.acmicpc.net/problem/3052

#include <iostream>
#include <algorithm>

using namespace std;

int	arr[42];
int cnt;

void Input()
{
	int tmp;

	for (int i = 0; i < 10; i++)
	{
		cin >> tmp;
		arr[tmp % 42] = 1;
	}
}

void Output()
{
	cout << cnt << "\n";
}

void Solve()
{
	for (int i = 0; i < 42; i++)
	{
		if (arr[i] == 1)
			cnt++;
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
