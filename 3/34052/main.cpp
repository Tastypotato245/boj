// https://www.acmicpc.net/problem/34052
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	sum, tmp;

void Solve()
{
	for (int i = 0 ; i < 4 ; ++i)
	{
		cin >> tmp;
		sum += tmp;
	}
	cout << (1800 >= sum + 300 ? "Yes" : "No");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
