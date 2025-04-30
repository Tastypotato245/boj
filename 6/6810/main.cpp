// https://www.acmicpc.net/problem/6810
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;

void Solve()
{
	cin >> A >> B >> C;
	cout << "The 1-3-sum is " << 91 + A * 1 + B * 3 + C * 1;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
