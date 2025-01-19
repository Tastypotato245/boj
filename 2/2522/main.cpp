// https://www.acmicpc.net/problem/2522
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
		for (int j = 0 ; j < N ; ++j)
			cout << (N - i - 1 <= j ? "*" : " ");
		cout << "\n";
	}
	for (int i = 0 ; i < N - 1 ; ++i)
	{
		for (int j = 0 ; j < N ; ++j)
			cout << (i < j  ? "*" : " ");
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
