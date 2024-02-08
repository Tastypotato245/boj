// https://www.acmicpc.net/problem/11053

#include <iostream>
#include <algorithm>

#define MAX 1001

using namespace std;

int	N = 0;
int Answer = 0;
int Array[MAX];
int DP[MAX];

void Input()
{
	int i = 0;
	cin >> N;
	while (++i <= N) cin >> Array[i];
}

void Solve()
{
	int	i = 0;
	int	j = 0;

	while (++i <= N)
	{
		DP[i] = 1;
		j = i - 1;
		while (j >= 1)
		{
			if (Array[i] > Array[j])
				DP[i] = max(DP[i], DP[j] + 1);
			--j;
		}
		Answer = max(DP[i], Answer);
	}
}

void Output()
{
	cout << Answer << "\n";
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
