// https://www.acmicpc.net/problem/26500
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		double a, b; cin >> a >> b;

		double absDist = abs(a - b);

		cout.setf(ios::fixed); cout.precision(1);
		cout << absDist << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
