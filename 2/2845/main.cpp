// https://www.acmicpc.net/problem/2845
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	L, P;

void Solve()
{
	cin >> L >> P;
	for (int i = 0 ; i < 5 ; ++i)
	{
		int tmp ;
		cin >> tmp;
		cout << tmp - L * P << " ";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
