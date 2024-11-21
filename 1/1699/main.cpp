// https://www.acmicpc.net/problem/1699
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#define INF 1000000000

using namespace std;

int	N, arr[100001];

void Solve()
{
	cin >> N;

	for (int i = 0 ; i <= N ; ++i)
		arr[i] = i;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j * j <= i ; ++j)
			arr[i] = min(arr[i], arr[i - j * j] + 1);

	cout << arr[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
