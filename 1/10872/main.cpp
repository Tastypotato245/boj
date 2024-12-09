// https://www.acmicpc.net/problem/10872
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[13];

void Solve()
{
	cin >> N;

	arr[0] = 1;
	for (int i = 1 ; i <= N ; ++i)
		arr[i] = arr[i - 1] * i;
	cout << arr[N];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
