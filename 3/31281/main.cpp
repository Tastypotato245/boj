// https://www.acmicpc.net/problem/31281
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	long long a, b, c;
	cin >> a >> b >> c;

	long long arr[3] = {a, b, c};
	sort(arr, arr + 3);

	cout << arr[1] << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
