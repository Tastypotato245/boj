// https://www.acmicpc.net/problem/23825
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N, M;

void Solve()
{
	cin >> N >> M;
	cout << min(N / 2, M / 2);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
