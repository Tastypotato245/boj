// https://www.acmicpc.net/problem/1744
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[50];
int ans = 0;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	sort(arr, arr + N);

	// 음수처리부분
	int minus_max = upper_bound(arr, arr + N, 0) - arr;
	for (int i = 0 ; i + 1 < minus_max ; i += 2)
		ans += arr[i] * arr[i + 1];
	if (minus_max % 2 == 1)
		ans += arr[minus_max - 1];

	// 1 처리 부분
	while (arr[minus_max] == 1)
	{
		ans += 1;
		minus_max++;
	}
	
	// 양수처리부분
	if ((N - minus_max) % 2 == 1)
		ans += arr[minus_max++];
	int j = minus_max;
	for ( ; j + 1 < N ; j += 2)
		ans += arr[j] * arr[j + 1];
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
