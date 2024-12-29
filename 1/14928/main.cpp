// https://www.acmicpc.net/problem/14928
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
		ans = (ans * 10 + (c - '0')) % 20000303;
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
