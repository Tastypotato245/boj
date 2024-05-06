// https://www.acmicpc.net/problem/17208
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, M, K;
int arr[301][301];

void Solve()
{
	cin >> N >> M >> K;
	vector<pair<int, int> > vec;
	for (int i = 1 ; i <= N ; ++i)
	{
		int m, k;
		cin >> m >> k;
		if (m <= M && k <= K)
			vec.emplace_back(m, k);
	}
	for (int i = 0 ; i < vec.size() ; ++i)
		for (int m = M ; m >= vec[i].first ; --m)
			for (int k = K ; k >= vec[i].second ; --k)
				arr[m][k] = max(arr[m][k], arr[m - vec[i].first][k - vec[i].second] + 1);
	cout << arr[M][K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
