// https://www.acmicpc.net/problem/1024
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, L;

void Solve()
{
	cin >> N >> L;

	for (int l = L ; l <= 100 ; ++l)
	{
		int bound = N / l - l / 2;
		if (bound < 0)
			bound = 0;
		int sum = 0;
		for (int i = 0 ; i < l ; ++i)
			sum += bound + i;
		if (sum == N)
		{
			for (int i = 0 ; i < l ; ++i)
				cout << bound + i << " ";
			cout << "\n";
			return ;
		}
		++bound;
		sum = 0;
		for (int i = 0 ; i < l ; ++i)
			sum += bound + i;
		if (sum == N)
		{
			for (int i = 0 ; i < l ; ++i)
				cout << bound + i << " ";
			cout << "\n";
			return ;
		}
	}
	cout << "-1\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
