// https://www.acmicpc.net/problem/1083
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, cnt;


void Solve()
{
	cin >> N;
	int arr[N];;

	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	cin >> cnt;

	int begin = 0;
	while (begin < N && cnt > 0)
	{
		int max_idx = max_element(&arr[begin], &arr[min(N - 1, begin + cnt) + 1]) - arr;
		for (int i = max_idx ; i > begin ; --i)
		{
			swap(arr[i], arr[i - 1]);
			--cnt;
		}
		++begin;
	}
	for (int i = 0 ; i < N ; ++i)
		cout << arr[i] << " ";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
