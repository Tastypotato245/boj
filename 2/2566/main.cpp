// https://www.acmicpc.net/problem/2566
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int y = 0;
	int x = 0;
	int maxi = -1;
	int now = -1;
	for (int i = 0 ; i < 9 ; ++i)
		for (int j = 0 ; j < 9 ; ++j)
		{
			cin >> now;
			if (now > maxi)
			{
				maxi = now;
				y = i;
				x = j;
			}
		}
	cout << maxi << "\n";
	cout << y + 1 << " " << x + 1;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
