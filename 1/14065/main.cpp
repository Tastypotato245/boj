// https://www.acmicpc.net/problem/14065
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

const double GALLON2LITER = 3.785411784;
const double MILE2KM = 1.609344;
const double HUNDRED_KM = 100.00;
double milesPerGallon;

void Solve()
{
	cin >> milesPerGallon;
	double result = HUNDRED_KM / ((MILE2KM / GALLON2LITER) * milesPerGallon);
	printf("%.6lf\n", result);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
