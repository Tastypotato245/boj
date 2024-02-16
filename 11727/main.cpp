// https://www.acmicpc.net/problem/11727
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

short arr[1001];

void Solve()
{
	cin >> N;
	arr[1] = 1;
	arr[2] = 3;
	for (int i = 3; i <= N ; ++i)
		arr[i] = (arr[i - 1] + (2 * arr[i - 2]) % 10007) % 10007;
	cout << arr[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
