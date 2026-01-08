// https://www.acmicpc.net/problem/31090
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int T;
	cin >> T;

	while (T--)
	{
		cin >> N;
		int lastTwo = N % 100;

		if ((N + 1) % lastTwo == 0)
			cout << "Good\n";
		else
			cout << "Bye\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
