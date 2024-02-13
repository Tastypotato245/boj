// https://www.acmicpc.net/problem/4153

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v(3);

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1)
	{
		cin >> v[0] >> v[1] >> v[2];
		if (v[0] == 0 && v[1] == 0 && v[2] == 0)
			break ;
		sort(v.begin(), v.end());
		if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return (0);
}
