// https://www.acmicpc.net/problem/31450
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	M, K;

void Solve()
{
	cin >> M >> K;
	cout << (M % K == 0 ? "Yes" : "No");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
