// https://www.acmicpc.net/problem/15051
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int A, B, C;

void Solve()
{
	cin >> A >> B >> C;

	int case_A = B * 2 + C * 4;
	int case_B = A * 2 + C * 2;
	int case_C = A * 4 + B * 2;

	cout << min(case_A, min(case_B, case_C));
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
