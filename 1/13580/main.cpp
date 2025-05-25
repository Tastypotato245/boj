// https://www.acmicpc.net/problem/13580
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;

void Solve()
{
	cin >> A >> B >> C;

	if (A == B || B == C || A == C)
		cout << "S";
	else if (A + B == C || A + C == B || B + C == A)
		cout << "S";
	else
		cout << "N";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
