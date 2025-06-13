// https://www.acmicpc.net/problem/15474
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, A, B, C, D;

void Solve()
{
	cin >> N >> A >> B >> C >> D;

	int X = (N / A + (N % A != 0)) * B ;
	int Y = (N / C + (N % C != 0)) * D;

	cout << min(X, Y);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
