// https://www.acmicpc.net/problem/27222
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	n;
bool exercise[1001];
int ans;

void Solve()
{
	cin >> n;

	for (int i = 0 ; i < n ; ++i)
		cin >> exercise[i];


	for (int i = 0 ; i < n ; ++i)
	{
		int x, y;
		cin >> x >> y;
		if (exercise[i] && y - x > 0)
			ans += y - x;
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
