// https://www.acmicpc.net/problem/1268
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int table[1001][5];
int banjang = 1;
int banjang_friend;

void Solve()
{
	cin >> N;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 0 ; j < 5 ; ++j)
			cin >> table[i][j];

	for (int i = 1 ; i <= N ; ++i)
	{
		int now_friend = 0;
		for (int j = 1 ; j <= N ; ++j)
		{
			if (i == j)
				continue ;
			for (int k = 0 ; k < 5 ; ++k)
			{
				if (table[i][k] == table[j][k])
				{
					++now_friend;
					break ;
				}
			}
		}
		if (now_friend > banjang_friend)
		{
			banjang_friend = now_friend;
			banjang = i;
		}
	}
	cout << banjang;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
