// https://www.acmicpc.net/problem/25704
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	int N, P; cin >> N >> P;
	int ans = P;
	if (N >= 5) ans = min(ans, P - 500);
	if (N >= 10) ans = min(ans, P / 10 * 9);
	if (N >= 15) ans = min(ans, P - 2000);
	if (N >= 20) ans = min(ans, P / 4 * 3);

	cout << max(ans, 0);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
