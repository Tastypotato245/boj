// https://www.acmicpc.net/problem/15232
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b;

void Solve()
{
	cin >> a >> b;
	for (int i = 0 ; i < a ; ++i)
	{
		for (int j = 0 ; j < b ; ++j)
			cout << "*";
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
