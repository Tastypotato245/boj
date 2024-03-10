// https://www.acmicpc.net/problem/9461
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int	M;
long long arr[101];

void getVal()
{
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3 ; i <= 100 ; ++i)
		arr[i] = arr[i - 2] + arr[i - 3];
}

void Solve()
{
	cin >> N;
	getVal();
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> M;
		cout << arr[M] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
