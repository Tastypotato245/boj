// https://www.acmicpc.net/problem/27110
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N, A, B, C;

void Solve()
{
	cin >> N >> A >> B >> C;
	cout << min(A, N) + min(B, N) + min(C, N);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
