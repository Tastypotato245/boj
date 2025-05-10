// https://www.acmicpc.net/problem/8760
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	Z, W, K;

void Solve()
{
	cin >> Z;

	for (int i = 0 ; i < Z ; ++i)
	{
		cin >> W >> K;
		cout << W * K / 2 << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
