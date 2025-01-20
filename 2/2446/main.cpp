// https://www.acmicpc.net/problem/2446
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < N * 2 - 1 - i ; ++j)
			cout << (i <= j ? "*" : " ");
		cout << "\n";
	}
	for (int i = N - 2 ; i >= 0 ; --i)
	{
		for (int j = 0 ; j < N * 2 - 1 - i ; ++j)
			cout << (i <= j ? "*" : " ");
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
