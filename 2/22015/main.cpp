// https://www.acmicpc.net/problem/22015
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c, upperLimit;

void Solve()
{
    cin >> a >> b >> c;
    upperLimit = max({a, b, c});
    cout << upperLimit - a + upperLimit - b + upperLimit - c;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
