// https://www.acmicpc.net/problem/31610
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;

void Solve()
{
	cin >> A >> B >> C;
	cout << A * B + C;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
