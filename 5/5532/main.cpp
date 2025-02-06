// https://www.acmicpc.net/problem/5532
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	L, A, B, C, D;

void Solve()
{
	cin >> L >> A >> B >> C >> D;

	cout << L - max(A / C + !!(A % C), B / D + !!(B % D));
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
