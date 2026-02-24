// https://www.acmicpc.net/problem/32905
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

void Solve()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int countA = 0;

		for (int j = 0; j < m; j++)
		{
			char x;
			cin >> x;

			if (x == 'A')
				countA++;
		}

		if (countA != 1)
		{
			cout << "No";
			return;
		}
	}

	cout << "Yes";
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
