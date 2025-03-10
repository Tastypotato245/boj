// https://www.acmicpc.net/problem/2442
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
		for (int j = 0 ; j < N - 1 - i ; ++j)
			cout << " ";
		for (int j = 0 ; j < i * 2 + 1 ; ++j)
			cout << "*";
		cout << " ";
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
