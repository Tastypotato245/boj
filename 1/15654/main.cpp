// https://www.acmicpc.net/problem/15654

#include <iostream>
#include <algorithm>

#define MAX 8

using namespace std;

int	N = 0;
int	M = 0;
vector<int> VecForSave(MAX);
vector<int> VecForPrint(MAX);
vector<int> VecForCheck(MAX);

void Input()
{
	int	i = -1;

	cin >> N;
	cin >> M;
	while (++i < N) cin >> VecForSave[i];
	sort(VecForSave.begin(), VecForSave.begin() + N);
}

void Output()
{
	int	i = -1;

	while (++i < M) cout << VecForPrint[i] << " ";
	cout << "\n";
}

void Solve(int len)
{
	int	pos = 0;

	if (len == M)
	{
		Output();
		return ;
	}
	while (pos < N)
	{
		if (VecForCheck[pos] == 1)
		{
			++pos;
			continue ;
		}
		VecForPrint[len] = VecForSave[pos];
		VecForCheck[pos] = 1;
		Solve(len + 1);
		VecForCheck[pos] = 0;
		++pos;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve(0);
	return (0);
}
