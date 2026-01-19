// https://www.acmicpc.net/problem/31518
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	bool hasSeven[3] = { false, false, false };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int x;
			cin >> x;
			if (x == 7)
				hasSeven[i] = true;
		}
	}

	if (hasSeven[0] && hasSeven[1] && hasSeven[2])
		cout << 777;
	else
		cout << 0;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
