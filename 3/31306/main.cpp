// https://www.acmicpc.net/problem/31306
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	string s;
	cin >> s;

	int cntWithoutY = 0;
	int cntWithY = 0;

	for (char c : s)
	{
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		{
			cntWithoutY++;
			cntWithY++;
		}
		else if (c == 'y')
		{
			cntWithY++;
		}
	}

	cout << cntWithoutY << " " << cntWithY << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
