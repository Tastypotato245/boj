// https://www.acmicpc.net/problem/24568
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	R, S;

void Solve()
{
	cin >> R >> S;
	cout << R * 8 + S * 3 - 28;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
