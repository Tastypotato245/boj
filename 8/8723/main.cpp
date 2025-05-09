// https://www.acmicpc.net/problem/8723
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;

void Solve()
{
	cin >> A >> B >> C;

	if (A == B && B == C)
		cout << 2;
	else if (A * A == B * B + C * C ||
				B * B == A * A + C * C ||
				C * C == A * A + B * B
			)
		cout << 1;
	else
		cout << 0;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
