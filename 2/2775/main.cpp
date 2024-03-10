// https://www.acmicpc.net/problem/2775

#include <iostream>
#include <algorithm>

using namespace std;

int	t;
int k;
int n;

int arr[15][15];
void People()
{
	arr[0][0] = 0;
	for (int j = 1; j <= 14; ++j)
		arr[0][j] = + j;
	for (int i = 1; i <= 14; ++i)
		for (int j = 1; j <= 14; ++j)
			for (int l = 1; l <= j; ++l)
				arr[i][j] += arr[i - 1][l];
}

void Solve()
{
	cin >> t;
	People();
	for (int i = 0; i < t; ++i)
	{
		cin >> k >> n;
		cout << arr[k][n] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
