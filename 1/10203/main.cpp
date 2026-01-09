// https://www.acmicpc.net/problem/10203
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	while (N--)
	{
		string w;
		cin >> w;

		int cnt = 0;
		for (char c : w)
		{
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				cnt++;
		}

		cout << "The number of vowels in " << w << " is " << cnt << ".\n";
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
