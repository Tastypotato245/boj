// https://www.acmicpc.net/problem/31261
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int a, b;
	cin >> a >> b;

	long long result = 1LL * a * a * (b + a + 1);
	cout << result << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
