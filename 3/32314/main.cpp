// https://www.acmicpc.net/problem/32314
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, w, v;

void Solve()
{
	cin >> a >> w >> v;
	cout << (w >= a * v);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
