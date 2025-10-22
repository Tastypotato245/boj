// https://www.acmicpc.net/problem/27213
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	int m, n; cin >> m >> n;

	int ans = (2 * m) + (2 * n) - 4;

	if (m == 1 || n == 1) ans = (m + n) - 1;

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
