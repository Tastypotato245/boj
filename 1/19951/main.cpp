// https://www.acmicpc.net/problem/19951
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int arr[100002];
int arr2[100002];

void Solve()
{
	cin >> N >> M;
	for (int i = 1 ; i <= N ; ++i)
		cin >> arr[i];
	for (int i = 0 ; i < M ; ++i)
	{
		int a, b, k;
		cin >> a >> b >> k;
		arr2[a] += k;
		arr2[b + 1] -= k;
	}

	for (int i = 1 ; i <= N ; ++i)
		arr2[i] += arr2[i - 1];
	for (int i = 1 ; i <= N ; ++i)
		cout << arr[i] + arr2[i] << " ";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
