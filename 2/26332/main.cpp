// https://www.acmicpc.net/problem/26332
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		int c, p; cin >> c >> p;

		int beforeDiscount = c * p;
		int discount = 2 * (c - 1);
		int afterDiscount = beforeDiscount - discount;

		cout << c << " " << p << "\n";
		cout << afterDiscount << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
