// https://www.acmicpc.net/problem/30017
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int A, B;
	cin >> A >> B;

	int cheese = min(B, A - 1);
	int result = 2 * cheese + 1;

	cout << result;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
