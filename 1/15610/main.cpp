// https://www.acmicpc.net/problem/15610
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

double square;

void Solve()
{
	cin >> square;
    printf("%.8f",sqrt(square) * 4);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
