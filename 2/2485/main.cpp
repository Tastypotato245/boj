// https://www.acmicpc.net/problem/2485
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int	N;
int arr[100000];

void Solve()
{
	cin >> N;

	cin >> arr[0] >> arr[1];
	int gcd_n = arr[1] - arr[0];
	int pre = arr[1];

	for (int i = 2 ; i < N ; ++i)
	{
		cin >> arr[i];
		gcd_n = gcd(gcd_n, pre - arr[i]);
		pre = arr[i];
	}
	int ans = 0;
	int idx = 0;
	for (int now = arr[0] ; now <= arr[N - 1] ; now += gcd_n)
	{
		if (arr[idx] == now)
		{
			idx++;
			continue ;
		}
		++ans;
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
