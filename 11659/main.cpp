// https://www.acmicpc.net/problem/11659
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int	M;
int arr[100001];

void Solve()
{
	int tmp;
	int a, b;

	cin >> N >> M;
	for (int i = 1 ; i <= N ; ++i)
	{
		cin >> tmp;
		arr[i] = arr[i - 1] + tmp;
	}
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> a >> b;
		cout << arr[b] - arr[a - 1]<< "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
