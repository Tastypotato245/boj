// https://www.acmicpc.net/problem/27959
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;

void Solve()
{
	cin >> N >> M;
	cout << (N * 100 >= M ? "Yes" : "No");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
