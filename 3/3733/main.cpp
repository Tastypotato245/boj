// https://www.acmicpc.net/problem/3733
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, S;

void Solve()
{
	while (cin >> N >> S)
		cout << S / (N + 1) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
