// https://www.acmicpc.net/problem/17912
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	n, min_value = 1000000001, min_index;

void Solve()
{
	cin >> n;

	for (int i = 0 ; i < n ; ++i)
	{
		int tmp;
		cin >> tmp;

		if (min_value > tmp)
		{
			min_value = tmp;
			min_index = i;
		}
	}
	cout << min_index;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
