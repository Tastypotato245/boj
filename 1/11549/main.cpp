// https://www.acmicpc.net/problem/11549
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T, tmp, cnt;

void Solve()
{
	cin >> T;

	for (int i = 0 ; i < 5 ; ++i)
	{
		cin >> tmp;
		cnt += (tmp == T);
	}
	cout << cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
