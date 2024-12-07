// https://www.acmicpc.net/problem/11653
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	int i = 2;
	while (N != 1)
	{
		if (N % i != 0)
		{
			++i;
			continue ;
		}
		cout << i << "\n";
		N /= i;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
