// https://www.acmicpc.net/problem/16434
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long	N, ATK;
//i | type, atk, h
long long room[123457][3];

long long minll(long long a, long long b)
{
	if (a < b)
		return a;
	return b;
}

void Solve()
{
	cin >> N >> ATK;
	for (int i = 0 ; i < N ; ++i)
		cin >> room[i][0] >> room[i][1] >> room[i][2];

	long long CUR_HP = 0;
	long long MIN_HP = 0;
	for (int i = 0 ; i < N ; ++i)
	{
		// 몬스터 방
		if (room[i][0] == 1)
		{
			long long iteration = room[i][2] / ATK;
			if (iteration * ATK >= room[i][2])
				CUR_HP -= room[i][1] * (iteration - 1);
			else
				CUR_HP -= room[i][1] * iteration;
		}
		// 포션방
		else
		{
			ATK += room[i][1];
			if (CUR_HP + room[i][2] <= 0)
				CUR_HP += room[i][2];
			else
				CUR_HP = 0;
		}
		MIN_HP = minll(MIN_HP, CUR_HP);
	}
	cout << -1 * MIN_HP + 1 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
