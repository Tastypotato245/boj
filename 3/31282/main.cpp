// https://www.acmicpc.net/problem/31282
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int N, M, K;
	cin >> N >> M >> K;

	int diff = K - M;
	int jumps = (N + diff - 1) / diff;  // 올림 처리

	cout << jumps << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
