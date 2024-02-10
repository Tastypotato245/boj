// https://www.acmicpc.net/problem/15652

#include <iostream>
#include <algorithm>

#define MAX 8

using namespace std;

int	N = 0;
int	M = 0;

void Input()
{
	cin >> N;
	cin >> M;
}

void PrintArray(int *Array)
{
	int	i = -1;

	while (++i < M) cout << Array[i] << " ";
	cout << "\n";
}

void Solve(int *Array, int cnt, int InsertN)
{
	if (cnt == M)
	{
		PrintArray(Array);
		return ;
	}
	while (InsertN <= N)
	{
		Array[cnt] = InsertN;
		Solve(Array, cnt + 1, InsertN);
		++InsertN;
	}
}

int	main(void)
{
	int	Array[MAX];

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve(Array, 0, 1);
	return (0);
}
