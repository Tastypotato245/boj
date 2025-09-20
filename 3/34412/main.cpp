// https://www.acmicpc.net/problem/34412
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
    int x;
    cin >> x;

    if (x >= 13) {
        cout << x + 1 << endl;
    } else {
        cout << x << endl;
    }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
