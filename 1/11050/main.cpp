// https://www.acmicpc.net/problem/11050

#include <iostream>
#include <algorithm>

#define MAX 11

using namespace std;

int	N;
int K;
int arr[MAX][MAX];

void Input()
{
	cin >> N;
	cin >> K;
}

void Output()
{
	cout << arr[N][K] << "\n";
}

void Solve()
{
	for (int i = 1 ; i < MAX ; ++i)
	{
		for (int j = 0 ; j <= i ; ++j)
		{
			if (j == 0 || j == i)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
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
