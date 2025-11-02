// https://www.acmicpc.net/problem/27332
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <iostream>

using namespace std;

void Solve()
{
	int a, b;
	cin >> a >> b;

	int sum = a + b * 7;
	if (sum > 30)
		cout << 0 << "\n";
	else
		cout << 1 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
