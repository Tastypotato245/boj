// https://www.acmicpc.net/problem/34921
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int A, T;
	cin >> A >> T;

	int P = 10 + 2 * (25 - A + T);
	if (P < 0) P = 0;

	cout << P;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
