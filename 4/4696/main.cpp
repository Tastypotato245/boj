// https://www.acmicpc.net/problem/4696
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

double N;

void Solve()
{
	while (true)
	{
		cin >> N;
		if (N == 0)
			break ;
	    printf("%.2f\n", 1 + N + pow(N, 2) + pow(N, 3) + pow(N, 4));
	}


}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
