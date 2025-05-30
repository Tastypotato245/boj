// https://www.acmicpc.net/problem/13985
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;
string tmp;

void Solve()
{
	cin >> A >> tmp >> B >> tmp >> C;

	if (A + B == C)
		cout << "YES";
	else
		cout << "NO";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
