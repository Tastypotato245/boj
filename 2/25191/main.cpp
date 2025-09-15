// https://www.acmicpc.net/problem/25191
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, A, B;

void Solve()
{
	cin >> N >> A >> B;
	cout << min(N, A / 2 + B);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
