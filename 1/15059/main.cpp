// https://www.acmicpc.net/problem/15059
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;
int	a, b, c;

void Solve()
{
	cin >> A >> B >> C;
	cin >> a >> b >> c;

	int lack_a = a - A > 0 ? a - A : 0;
	int lack_b = b - B > 0 ? b - B : 0;
	int lack_c = c - C > 0 ? c - C : 0;

	cout << lack_a + lack_b + lack_c;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
