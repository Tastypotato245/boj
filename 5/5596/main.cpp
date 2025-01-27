// https://www.acmicpc.net/problem/5596
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	S, T;

void Solve()
{
	for (int i = 0 ; i < 4 ; ++i)
	{
		int tmp;
		cin >> tmp;
		S += tmp;
	}

	for (int i = 0 ; i < 4 ; ++i)
	{
		int tmp;
		cin >> tmp;
		T += tmp;
	}

	cout << max(S, T);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
