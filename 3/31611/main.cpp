// https://www.acmicpc.net/problem/31611
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	cout << ((N - 2) % 7 == 0);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
