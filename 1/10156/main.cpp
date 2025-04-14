// https://www.acmicpc.net/problem/10156
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	K, N, M;

void Solve()
{
	cin >> K >> N >> M;
	int extra_money = K * N - M;
	cout << (extra_money > 0 ? extra_money : 0);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
