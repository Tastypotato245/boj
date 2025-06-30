// https://www.acmicpc.net/problem/17356
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

double a, b, m;

void Solve()
{
	cin >> a >> b;
	m = (b - a) / 400;
	printf("%.20f", 1 / (1 + pow(10, m)));
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
