// https://www.acmicpc.net/problem/30214
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	S1, S2;

void Solve()
{
	cin >> S1 >> S2;
	cout << (S1 * 2 >= S2 ? "E" : "H");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
