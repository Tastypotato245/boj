// https://www.acmicpc.net/problem/1788
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;
int fb[2000001];

void Solve()
{
	cin >> N;
	fb[0 + 1000000] = 0;
	fb[1 + 1000000] = 1;
	for (int i = 2 + 1000000 ; i <= 2000000 ; ++i)
		fb[i] = (fb[i - 1] + fb[i - 2]) % 1000000000;
	for (int i = -1 + 1000000 ; i >= 0 ; --i)
		fb[i] = (fb[i + 2] - fb[i + 1]) % 1000000000;

	if (N == 0)
		cout << 0 << "\n";
	else
		cout << (fb[N + 1000000] > 0 ? 1 : -1) << "\n";

	cout << abs(fb[N + 1000000]) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
