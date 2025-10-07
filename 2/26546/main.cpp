// https://www.acmicpc.net/problem/26546
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	int n;
	cin >> n;

	for (int t = 0; t < n; t++)
	{
		string input;
		int i, j;
		cin >> input >> i >> j;

		string ret = input.substr(0, i) + input.substr(j);
		cout << ret << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
