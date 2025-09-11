// https://www.acmicpc.net/problem/24087
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int price = 250;
double a, b, s;

void Solve()
{
    cin >> s >> a >> b;
    if (s <= a)
		cout << price;
    else
		cout << price + 100 * ceil((s - a)/b);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
