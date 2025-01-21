// https://www.acmicpc.net/problem/2523
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N * 2 - 1 ; ++i)
	{
		for (int j = 0 ; j < N - abs(N - i - 1)  ; ++j)
			cout << "*";
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
