// https://www.acmicpc.net/problem/21335
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
const double PI = 3.14159265359;

void Solve()
{
	double a;
	cin >> a;

	double perimeter = sqrt(a / PI) * 2 * PI;
	printf("%.7lf\n", perimeter);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
