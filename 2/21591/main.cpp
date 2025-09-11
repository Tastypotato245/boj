// https://www.acmicpc.net/problem/21591
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int w1, h1, w2, h2;

void Solve()
{
    cin >> w1 >> h1 >> w2 >> h2;

    if (w1 - w2 >= 2 && h1 - h2 >= 2)
		cout << 1;
    else
		cout << 0;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
