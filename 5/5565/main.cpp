// https://www.acmicpc.net/problem/5565
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	total_price;


void Solve()
{
	cin >> total_price;
	for (int i = 0 ; i < 9 ; ++i)
	{
		int tmp;
		cin >> tmp;
		total_price -= tmp;
	}
	cout << total_price;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
