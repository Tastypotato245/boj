// https://www.acmicpc.net/problem/12920
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int	N, M;
int arr[10001];

void Solve()
{
	cin >> N >> M;
	int index = 1;
	vector<pair<int, int> > vec(1000001);
	for (int i = 1; i <= N ; ++i)
	{
		int v, c, k;
		cin >> v >> c >> k;
		for (int j = 1 ; j < k ; j *= 2)
		{
			vec[index].first = v * j;
			vec[index].second = c * j;
			++index;
			k -= j;
		}
		vec[index].first = v * k;
		vec[index].second = c * k;
		++index;
	}
	for (int i = 1 ; i < index ; ++i)
		for (int j = M ; j >= vec[i].first ; --j)
				arr[j] = max(arr[j], arr[j - vec[i].first] + vec[i].second);
	cout << arr[M] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
