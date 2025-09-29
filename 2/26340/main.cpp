// https://www.acmicpc.net/problem/26340
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int T;
	cin >> T;
	while (T--) {
		int x, y, n; cin >> x >> y >> n;
		cout << "Data set: " << x << ' ' << y << ' ' << n << '\n';
		if (x < y) swap(x, y);
		while (n--) {
			x >>= 1;
			if (x < y) swap(x, y);
		}

		cout << x << ' ' << y << '\n' << '\n';
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
