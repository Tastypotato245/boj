// https://www.acmicpc.net/problem/1253
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, ans;
int arr[2000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	sort(arr, arr + N);
	for (int i = 0 ; i < N ; ++i)
	{
		int l = 0, r = N - 1;
		while (l < r)
		{
			if (r == i) --r;
			else if (l == i) ++l;
			else if (arr[i] == arr[l] + arr[r])
			{
				++ans;
				break;
			}
			else if (arr[i] > arr[l] + arr[r])
				++l;
			else
				--r;
		}
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
