// https://www.acmicpc.net/problem/15700
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long	N, M;

void Solve()
{
	cin >> N >> M;
	cout << N * M / 2;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
