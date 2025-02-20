// https://www.acmicpc.net/problem/23235
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	cnt;

void Solve()
{
	while (true)
	{
		++cnt;
		int a, b;
		cin >> a;
		if (a == 0)
			break ;
		for (int i = 0 ; i < a ; ++i)
			cin >> b;
		cout << "Case " << cnt << ": Sorting... done!\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
