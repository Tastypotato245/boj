// https://www.acmicpc.net/problem/7891
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
