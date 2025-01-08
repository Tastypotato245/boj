// https://www.acmicpc.net/problem/20492
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	cout << (int)(N * 0.78) << " " << int(N * 0.8 + N * 0.2 * 0.78);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
