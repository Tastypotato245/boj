// https://www.acmicpc.net/problem/10987
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int ans;

void Solve()
{
	cin >> s;
	for (auto c : s)
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			++ans;
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
