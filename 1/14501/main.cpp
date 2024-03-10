// https://www.acmicpc.net/problem/14501

#include <iostream>
#include <algorithm>

#define MAX_N 15

using namespace std;

int	N = 0;
int Array[MAX_N][2];
int DP[MAX_N + 1];

void Input()
{
	int i = -1;

	cin >> N;
	while (++i < N) cin >> Array[i][0] >> Array[i][1];
}

void Solve()
{
	int	i = -1;
	int	j;

	while (++i < N)
	{
		j = i + Array[i][0];
		if (i > 0)
			DP[i] = max(DP[i - 1], DP[i]);
		if (j > N)
			continue ;
		DP[j] = max(DP[j], DP[i] + Array[i][1]);
	}
}

void Output()
{
	cout << max(DP[N - 1], DP[N]) << "\n";
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
