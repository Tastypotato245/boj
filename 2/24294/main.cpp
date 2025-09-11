// https://www.acmicpc.net/problem/24294
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int w1, h1, w2, h2;

void Solve()
{
    cin >> w1 >> h1 >> w2 >> h2;
    cout << 4 + 2 * max(w1, w2) + 2 * (h1 + h2);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
