// https://www.acmicpc.net/problem/28444
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	H, I, A, R, C;

void Solve()
{
	cin >> H >> I >> A >> R >> C;
	cout << H * I - A * R * C;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
