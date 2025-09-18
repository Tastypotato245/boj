// https://www.acmicpc.net/problem/34362
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double N;

void Solve()
{
	cin >> N;
	N -= 0.3;

	printf("%.4f", N);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
