// https://www.acmicpc.net/problem/1946
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	T, N;

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		cin >> N;
		vector<pair<int, int> > v(N);
		for (int j = 0 ; j < N ; ++j)
			cin >> v[j].first >> v[j].second;
		sort(v.begin(), v.end());
		int m = v[0].second;
		int cnt = 1;
		for (int j = 1 ; j < N ; ++j)
			if (m > v[j].second)
			{
				m = v[j].second;
				++cnt;
			}
		cout << cnt << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
