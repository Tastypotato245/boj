// https://www.acmicpc.net/problem/9063
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int min_y = 10001, min_x = 10001;
int max_y = -10001, max_x = -10001;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int y, x;
		cin >> y >> x;
		min_y = min(min_y, y);
		min_x = min(min_x, x);
		max_y = max(max_y, y);
		max_x = max(max_x, x);
	}
	cout << (max_y - min_y) * (max_x - min_x);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
