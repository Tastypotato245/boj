// https://www.acmicpc.net/problem/32941
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int T, X;
int N;

void Solve()
{
	cin >> T >> X;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int K;
		cin >> K;

		bool canAttend = false;

		for (int j = 0; j < K; j++)
		{
			int time;
			cin >> time;

			if (time == X)
				canAttend = true;
		}

		if (!canAttend)
		{
			cout << "NO";
			return;
		}
	}

	cout << "YES";
}

int	main(void)
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	Solve();
	return (0);
}
