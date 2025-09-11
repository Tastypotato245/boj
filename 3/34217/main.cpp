// https://www.acmicpc.net/problem/34217
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C, D;

void Solve()
{
	cin >> A >> B >> C >> D;

	int han = A + C;
	int yong = B + D;
	if (han == yong)
		cout << "Either";
	else if (han > yong)
		cout << "Yongdap";
	else if (han < yong)
		cout << "Hanyang Univ.";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
