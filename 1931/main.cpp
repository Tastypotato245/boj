// https://www.acmicpc.net/problem/1931
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
int cnt;

void Solve()
{
	cin >> N;
	vector<pair<int, int> > v(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> v[i].second >> v[i].first;
	sort(v.begin(), v.end());
	int start = 0;
	for (int i = 0 ; i < N ; ++i)
	{
		if (v[i].second >= start)
		{
			++cnt;
			start = v[i].first;
		}
	}
	cout << cnt << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
