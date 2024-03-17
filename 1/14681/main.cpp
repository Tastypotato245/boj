// https://www.acmicpc.net/problem/14681
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	x, y, ans;

void Solve()
{
	cin >> x >> y;
	if (x > 0 && y > 0)
		ans = 1;
	else if (x < 0 && y > 0)
		ans = 2;
	else if (x < 0 && y < 0)
		ans = 3;
	else
		ans = 4;
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
