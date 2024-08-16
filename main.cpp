// https://www.acmicpc.net/problem/2440
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	for (int j = 0 ; j < N ; ++j)
	{
		for (int i = j ; i < N ; ++i)
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
