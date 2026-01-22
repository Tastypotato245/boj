// https://www.acmicpc.net/problem/31607
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A == B + C || B == A + C || C == A + B)
		cout << 1;
	else
		cout << 0;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
