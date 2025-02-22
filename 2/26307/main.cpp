// https://www.acmicpc.net/problem/26307
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	HH, mm;

void Solve()
{
	cin >> HH >> mm;
	cout << (HH - 9) * 60 + mm;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
