// https://www.acmicpc.net/problem/1034
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int	N, M, K, ans;
string lamp_row[50];
map<string, int> m;

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < N ; ++i)
	{
		cin >> lamp_row[i];

		if (m.find(lamp_row[i]) == m.end())
			m[lamp_row[i]] = 1;
		else
			m[lamp_row[i]]++;
	}

	cin >> K;

	for (auto row : m)
	{
		int cnt_0 = 0;
		for (auto row_item : row.first)
			if (row_item == '0')
				cnt_0++;
		
		if (K < cnt_0 || (K >= cnt_0 && (K - cnt_0) % 2 == 1))
			continue ;
		ans = max(ans, row.second);
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
