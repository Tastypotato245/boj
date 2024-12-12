// https://www.acmicpc.net/problem/24060
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, K;
int arr[500000];
int cnt = 0;
int ans = -1;

void merge(int s, int m, int e)
{
	int tmp[e - s + 2];
	int i = s, j = m + 1, t = 0;

	while (i <= m && j <= e)
	{
		if (arr[i] <= arr[j])
			tmp[t++] = arr[i++];
		else
			tmp[t++] = arr[j++];
	}
	while (i <= m)
		tmp[t++] = arr[i++];
	while (j <= e)
		tmp[t++] = arr[j++];
	i = s; t = 0;
	while (i <= e)
	{
		cnt++;
		arr[i++] = tmp[t++];
		if (cnt == K)
			ans = tmp[t - 1];
	}
}

void merge_sort(int s, int e)
{
	if (s < e)
	{
		int m = (s + e) / 2;
		merge_sort(s, m);
	 	merge_sort(m + 1, e);
		merge(s, m, e);
	}
}

void Solve()
{
	cin >> N >> K;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	merge_sort(0, N - 1);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
