// https://www.acmicpc.net/problem/2738
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int m1[10000];

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> m1[i * M + j];
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < M ; ++j)
		{
			int tmp;
			cin >> tmp;
			cout << m1[i * M + j] + tmp << " ";
		}
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
