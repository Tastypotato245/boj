// https://www.acmicpc.net/problem/6778
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	antenna, eyes;

void Solve()
{
	cin >> antenna >> eyes;

	if (antenna >= 3 && eyes <= 4)
		cout << "TroyMartian\n";
	if (antenna <= 6 && eyes >= 2)
		cout << "VladSaturnian\n";
	if (antenna <= 2 && eyes <= 3)
		cout << "GraemeMercurian\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
