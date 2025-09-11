// https://www.acmicpc.net/problem/24196
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	string encrt;
	string ans = "";
	int idx = 0;

	cin >> encrt;

	while (true) {
		if ((size_t)idx == encrt.size() - 1)
			break;

		ans += encrt[idx];
		idx += encrt[idx] - 'A' + 1;
	}
	ans += encrt[encrt.size() - 1];

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
