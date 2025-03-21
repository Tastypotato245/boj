// https://www.acmicpc.net/problem/33515
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T1, T2;

void Solve()
{
	cin >> T1 >> T2;
	cout << min(T1, T2);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
