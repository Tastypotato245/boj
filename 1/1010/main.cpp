// https://www.acmicpc.net/problem/1010
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	T;

int bico[961];
void MakeBiCo()
{
	int i, j;
	bico[0] = 1;
	for (int i = 1 ; i <= 30 ; ++i)
	{
		bico[i * 31] = 1;
		for (int j = 1 ; j <= i ; ++j)
			bico[i * 31 + j] = bico[(i - 1) * 31 + j - 1] + bico[(i - 1) * 31 + j];
	}
}

void Solve()
{
	cin >> T;
	int N, M;
	MakeBiCo();
	for (int i = 0 ; i < T ; ++i)
	{
		cin >> N >> M;
		cout << bico[M * 31 + N] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
