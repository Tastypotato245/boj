// https://www.acmicpc.net/problem/25494
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	int sz, a, b, c;

	cin >> sz;

	while(sz--)
	{
		cin >> a >> b >> c;
		cout << min(a, min(b, c)) << endl;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
