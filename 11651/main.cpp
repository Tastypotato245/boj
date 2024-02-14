// https://www.acmicpc.net/problem/11651

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

bool Comp(const pair<int, int> &a, const pair<int, int> &b)
{
	if (a.second == b.second)
		return (a.first < b.first);
	return (a.second < b.second);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	pair<int, int> arr[N];
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i].first >> arr[i].second;
	sort(arr, arr + N, Comp);
	for (int i = 0 ; i < N ; ++i)
		cout << arr[i].first << " " << arr[i].second << "\n";
	return (0);
}
