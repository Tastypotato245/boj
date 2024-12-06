// https://www.acmicpc.net/problem/10798
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

char c[15][16];

void Solve()
{
	int idx = 0;
	string s;
	while (getline(cin, s))
	{
		for (int j = 0 ; j < s.size() ; ++j)
			c[idx][j] = s[j];
		++idx;
	}

	int size = idx;
	for (int i = 0 ; i < 15 ; ++i)
		for (int j = 0 ; j < size ; ++j)
			if (c[j][i] == 0)
				continue ;
			else
				cout << c[j][i];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
