// https://www.acmicpc.net/problem/12015
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, ans = 1;
int arr[1000000];
int dp[1000000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	vector<int> v;
	dp[0] = 1;
	v.push_back(arr[0]);
	for (int i = 1 ; i < N ; ++i)
	{
		if (arr[i] > v[ans - 1])
		{
			v.push_back(arr[i]);
			ans++;
		}
		else
			v[lower_bound(v.begin(), v.end(), arr[i]) - v.begin()] = arr[i];
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
