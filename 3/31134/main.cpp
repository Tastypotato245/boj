// https://www.acmicpc.net/problem/31134
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int T;
	cin >> T;

	while (T--)
	{
		long long x;
		cin >> x;

		cout << 2 * x - 1 << '\n';
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
