// https://www.acmicpc.net/problem/5522
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int tmp, ans = 0;
	for (int i = 0 ; i < 5 ; ++i)
	{
		cin >> tmp;
		ans += tmp;
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
