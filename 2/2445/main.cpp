// https://www.acmicpc.net/problem/2445
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N - 1 ; ++i)
	{
		for (int j = 0 ; j < N * 2 ; ++j)
			cout << ((j <= i | j >= (N * 2 - 1 - i)) ? "*" : " ");
		cout << "\n";
	}
	for (int i = N - 1 ; i >= 0 ; --i)
	{
		for (int j = 0 ; j < N * 2 ; ++j)
			cout << ((j <= i | j >= (N * 2 - 1 - i)) ? "*" : " ");
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
