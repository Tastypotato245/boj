// https://www.acmicpc.net/problem/10188
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
		int x, y;
		cin >> x >> y;

		for (int j = 0 ; j < y ; ++j)
		{
			for (int k = 0 ; k < x ; ++k)
				cout << "X";
			cout << "\n";
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
