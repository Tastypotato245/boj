// https://www.acmicpc.net/problem/8710
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	k, w, m;

void Solve()
{
	cin >> k >> w >> m;

	int cnt;
	if (w - k <= 0)
		cnt = 0;
	else
		cnt = (w - k) / m + ((w - k) % m != 0);
	cout << cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
