// https://www.acmicpc.net/problem/14038
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;


void Solve()
{
	int cnt = 0;
	for (int i = 0 ; i < 6 ; ++i)
	{
		char c;
		cin >> c;
		if (c == 'W')
			++cnt;
	}
	if (cnt == 0)
		cout << -1;
	else
		cout << 4 - (cnt + 1) / 2;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
