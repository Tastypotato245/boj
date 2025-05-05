// https://www.acmicpc.net/problem/7595
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	while (true)
	{
		cin >> N;
		if (N == 0)
			break ;
		for (int i = 0 ; i < N ; ++i)
		{
			for (int j = 0 ; j <= i ; ++j)
				cout << "*";
			cout << "\n";
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
