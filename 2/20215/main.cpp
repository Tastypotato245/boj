// https://www.acmicpc.net/problem/20215
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

double w, h, diagonalCut, rectangleCut;

void Solve()
{
    cin >> w >> h;
    rectangleCut = w + h;
    diagonalCut = sqrt(w * w + h * h);
    printf("%.9f", rectangleCut - diagonalCut);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
