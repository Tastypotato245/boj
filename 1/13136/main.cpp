// https://www.acmicpc.net/problem/13136
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long	R, C, N;

void Solve()
{
	cin >> R >> C >> N;

	cout << (R / N + (R % N != 0)) * (C / N + (C % N != 0));
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
