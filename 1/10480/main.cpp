// https://www.acmicpc.net/problem/10480
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
		int t;
		cin >> t;
		cout << t << (t % 2 == 0 ? " is even" : " is odd") << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
