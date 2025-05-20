// https://www.acmicpc.net/problem/13118
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	p1, p2, p3, p4, x, y, r;

void Solve()
{
	cin >> p1 >> p2 >> p3 >> p4;
	cin >> x >> y >> r;

	if (x == p1) cout << "1";
	else if (x == p2) cout << "2";
	else if (x == p3) cout << "3";
	else if (x == p4) cout << "4";
	else cout << "0";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
