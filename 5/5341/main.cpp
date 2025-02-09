// https://www.acmicpc.net/problem/5341
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
		cout << N * (N + 1) / 2  << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
