// https://www.acmicpc.net/problem/4714
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double X;

void Solve()
{
	while (true)
	{
		cin >> X;
		if (X < 0)
			break ;
		double Y = X * 0.167;
		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", X, Y);
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
