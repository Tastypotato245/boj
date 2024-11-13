// https://www.acmicpc.net/problem/11722
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, ans;
int dp[1000];

void Solve()
{
	cin >> N;
	int arr[N];
	for (auto& item : arr)
		cin >> item;
	fill(dp, dp + N, 1);
	for (int i = 0 ; i < N ; ++i)
		for (int j = i - 1 ; j >= 0 ; --j)
			if (arr[i] < arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
	cout << *max_element(dp, dp + N) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
