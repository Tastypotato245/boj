// https://www.acmicpc.net/problem/11943
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C, D;

void Solve()
{
	cin >> A >> B >> C >> D;
	cout << min(A + D, B + C);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
