// https://www.acmicpc.net/problem/
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	sum;

void Solve()
{
	for (int i = 0 ; i < 5 ; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp < 40)
			tmp = 40;
		sum += tmp;
	}
	cout << sum / 5;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
