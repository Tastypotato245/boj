// https://www.acmicpc.net/problem/11049
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
int dp[500][500];

void Solve()
{
	cin >> N;
	vector<pair<int, int> > v(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> v[i].first >> v[i].second;
	for (int i = 1 ; i < N ; ++i)
	{
		for (int j = i - 1 ; j >= 0 ; --j)
		{
			for (int k = 0 ; k ;)
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
