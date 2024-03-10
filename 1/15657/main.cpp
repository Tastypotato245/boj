// https://www.acmicpc.net/problem/15657

#include <iostream>
#include <algorithm>

#define MAX 8

using namespace std;

int	N = 0;
int	M = 0;
vector<int> VecForSave(MAX);
vector<int> VecForPrint(MAX);

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

void Solve(int len, int pos)
{
	if (len == M)
	{
		Output();
		return ;
	}
	while (pos < N)
	{
		VecForPrint[len] = VecForSave[pos];
		Solve(len + 1, pos);
		++pos;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve(0, 0);
	return (0);
}
