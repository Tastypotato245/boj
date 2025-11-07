// https://www.acmicpc.net/problem/27880
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void Solve()
{
	string s;
	int x, ans = 0;
	while (cin >> s >> x)
		if (s == "Es")
			ans += 21 * x;
		else
			ans += 17 * x;
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
