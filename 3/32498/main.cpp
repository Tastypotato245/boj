// https://www.acmicpc.net/problem/32498
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, cnt;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp % 2)
			cnt++;
	}
	cout << cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
