// https://www.acmicpc.net/problem/12865
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, K;

int arr[101][100001];

void Solve()
{
	cin >> N >> K;
	vector<pair<int, int> > v(N + 1);
	for (int i = 1 ; i <= N ; ++i)
		cin >> v[i].first >> v[i].second;
	for (int i = 1 ; i <= N ; ++i)
	{
		for (int j = 0 ; j <= K ; ++j)
		{
			if (v[i].first > j)
				arr[i][j] = arr[i - 1][j];
			else
				arr[i][j] = max(arr[i - 1][j], arr[i - 1][j - v[i].first] + v[i].second);
		}
	}
	cout << arr[N][K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
