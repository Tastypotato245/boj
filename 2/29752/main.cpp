// https://www.acmicpc.net/problem/29752
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, ans = 0;
int arr[1000];

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	int tmp = 0;
	for (int i = 0 ; i < N ; ++i)
	{
		if (arr[i])
			tmp++;
		else
		{
			ans = max(ans, tmp);
			tmp = 0;
		}
	}
	ans = max(ans, tmp);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
