// https://www.acmicpc.net/problem/31280
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int mn = min({a, b, c, d});
	int result = a + b + c + d - mn + 1;

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
