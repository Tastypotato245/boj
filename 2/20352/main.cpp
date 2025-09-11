// https://www.acmicpc.net/problem/20352
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>
#define pi 3.14159265359

using namespace std;

double tentArea;

void Solve()
{
	cin >> tentArea;
    printf("%.10f",sqrt(tentArea/pi) * 2 * pi);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
