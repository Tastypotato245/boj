// https://www.acmicpc.net/problem/17874
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	n, h, v;

void Solve()
{
	cin >> n >> h >> v;
	cout << max(n - h, h) * max(n - v, v) * 4;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
