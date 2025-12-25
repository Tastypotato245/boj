// https://www.acmicpc.net/problem/30156
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
		string s;
		cin >> s;

		int cntA = 0;
		int cntB = 0;

		for (char c : s)
		{
			if (c == 'a')
				cntA++;
			else
				cntB++;
		}

		cout << min(cntA, cntB) << '\n';
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
