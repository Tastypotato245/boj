// https://www.acmicpc.net/problem/27239
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;


void Solve()
{
	int n;
	cin >> n;

	int row = (n - 1) / 8,
		col = (n - 1) % 8;

	char c = 'a' + col;

	cout << c << row + 1 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
