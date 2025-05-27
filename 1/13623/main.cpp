// https://www.acmicpc.net/problem/13623
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;

void Solve()
{
	cin >> A >> B >> C;

	if (A == B && B == C)
		cout << "*";
	else if (A == B)
		cout << "C";
	else if (A == C)
		cout << "B";
	else if (B == C)
		cout << "A";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
