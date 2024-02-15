// https://www.acmicpc.net/problem/11659
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int	M;

void Solve()
{
	int tmp;

	cin >> N >> M;
	int arr[N][N];
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> tmp;
		for (int j = 0 ; j < i ; ++j)
		{
			arr[i][j] = tmp;
		}
	}
	for (int i = 0 ; i < M ; ++i)
	{
		int a, b, ans = 0;
		cin >> a >> b;
		for (int j = a - 1 ; j < b ; ++j)
			ans += arr[j];
		cout << ans << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
