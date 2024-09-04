// https://www.acmicpc.net/problem/24680
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	for (int i = 0 ; i < 15 ; ++i)
	{
		cout << "D";
		if (i % 2 == 0)
		{
			cout << "R";
			for (int j = 0 ; j < 14 ; ++j)
				cout << "rFr";
		}
		else
		{
			cout << "L";
			for (int j = 0 ; j < 14 ; ++j)
				cout << "lFl";
		}
	}
	for (int j = 0 ; j < 15 ; ++j)
		cout << "uFu";
	for (int j = 0 ; j < 15 ; ++j)
		cout << "lFl";
	for (int j = 0 ; j < 15 ; ++j)
		cout << "dFd";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
