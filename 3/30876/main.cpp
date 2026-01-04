// https://www.acmicpc.net/problem/30876
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	int x, y;
	int minY = 1e9;
	int ansX = 0, ansY = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		if (y < minY)
		{
			minY = y;
			ansX = x;
			ansY = y;
		}
	}

	cout << ansX << ' ' << ansY << '\n';
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
