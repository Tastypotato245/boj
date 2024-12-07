// https://www.acmicpc.net/problem/24265
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long N;

void Solve()
{
	cin >> N;
	cout << N * (N - 1) / 2 << "\n" << 2;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
