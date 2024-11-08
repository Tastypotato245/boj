// https://www.acmicpc.net/problem/1806
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, S;
int arr[100000];
int ans = 111111;

void Solve()
{
	cin >> N >> S;
	for (int i = 1 ; i <= N ; ++i)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	int l = 0, r = 1;
	while (r <= N)
	{
		if (arr[r] - arr[l] < S)
			++r;
		else
		{
			ans = min(ans, r - l);
			++l;
		}
	}
	if (ans == 111111)
		cout << "0\n";
	else
		cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
