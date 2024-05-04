// https://www.acmicpc.net/problem/12865
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, K;

int arr[100001];

void Solve()
{
	cin >> N >> K;
	vector<pair<int, int> > v(N + 1);
	for (int i = 1 ; i <= N ; ++i)
		cin >> v[i].first >> v[i].second;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = K ; j >= v[i].first ; --j)
			arr[j] = max(arr[j], arr[j - v[i].first] + v[i].second);
	cout << arr[K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
