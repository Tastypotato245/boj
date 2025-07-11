// https://www.acmicpc.net/problem/18408
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	tmp, cnt;

void Solve()
{
	for (int i = 0 ; i < 3 ; ++i)
	{
		cin >> tmp;
		if (tmp == 1)
			++cnt;
	}
	cout << ((cnt >= 2) ? 1 : 2) ;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
