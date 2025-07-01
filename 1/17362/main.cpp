// https://www.acmicpc.net/problem/17362
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	if (N % 8 == 1)
		cout << 1;
	else if (N % 8 == 2 || N % 8 == 0)
		cout << 2;
	else if (N % 8 == 3 || N % 8 == 7)
		cout << 3;
	else if (N % 8 == 4 || N % 8 == 6)
		cout << 4;
	else if (N % 8 == 5)
		cout << 5;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
