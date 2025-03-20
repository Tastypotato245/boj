// https://www.acmicpc.net/problem/31614
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	H, M;

void Solve()
{
	cin >> H >> M;
	cout << H * 60 + M ;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
