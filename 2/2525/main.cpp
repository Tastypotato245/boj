// https://www.acmicpc.net/problem/2525
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;

void Solve()
{
	cin >> A >> B >> C;

	B = B + C % 60;
	if (B >= 60)
	{
		++A;
		B = B % 60;
	}
	A = A + C / 60;
	if (A >= 24)
		A = A % 24;
	cout << A << " " << B << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
