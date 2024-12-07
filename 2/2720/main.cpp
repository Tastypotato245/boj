// https://www.acmicpc.net/problem/2720
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
		int money;
		cin >> money;
		cout << money / 25 << " ";
		money %= 25;
		cout << money / 10 << " ";
		money %= 10;
		cout << money / 5 << " ";
		money %= 5;
		cout << money << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
