// https://www.acmicpc.net/problem/30143
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N, A, D;

void Solve()
{
	int T;
	cin >> T;

	while (T--)
	{
		cin >> N >> A >> D;

		long long sum = (long long)N * (2 * A + (N - 1) * D) / 2;
		cout << sum << '\n';
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
