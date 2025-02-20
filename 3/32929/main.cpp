// https://www.acmicpc.net/problem/32929
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
char uos[4] = "UOS";

void Solve()
{
	cin >> N;
	cout << uos[(N - 1) % 3];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
