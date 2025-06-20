// https://www.acmicpc.net/problem/16486
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int d1, d2;
    float pi = 3.141592;

    cin >> d1 >> d2;

    cout << fixed;
    cout.precision(6);

    cout << d1 * 2 + 2 * pi * d2;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
