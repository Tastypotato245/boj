// https://www.acmicpc.net/problem/23795
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, sum;

void Solve()
{
	while (true)
	{
		cin >> N;
		if (N == -1)
			break;
		sum += N;
	}
	cout << sum;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
