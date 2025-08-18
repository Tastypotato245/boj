// https://www.acmicpc.net/problem/24072
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c < a || b <= c)
        cout << 0;
    else
        cout << 1;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
