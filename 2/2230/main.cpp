// https://www.acmicpc.net/problem/2230
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int arr[100001];

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	sort(arr, arr + N);

	int l = 0, r = 1, best = 2000000000;
	while (r < N)
	{
		int tmp = arr[r] - arr[l];
		if (tmp >= M)
		{
			best = min(best, tmp);
			++l;
		}
		else
			++r;
	}
	cout << best << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
