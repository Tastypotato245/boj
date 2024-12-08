// https://www.acmicpc.net/problem/1934
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int	T;

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		int a, b;
		cin >> a >> b;
		cout << lcm(a, b) << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
