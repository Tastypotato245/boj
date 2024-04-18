// https://www.acmicpc.net/problem/9251
// github/Tastypotato245
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int val[1001][1001];
string a, b;

void Solve()
{
	cin >> a >> b;
	for (int y = a.size() - 1 ; y >= 0 ; --y)
		for (int x = b.size() - 1 ; x >= 0 ; --x)
			if (a[y] == b[x])
				val[y][x] = val[y + 1][x + 1] + 1;
			else
				val[y][x] = max(val[y + 1][x], val[y][x + 1]);
	cout << val[0][0] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
