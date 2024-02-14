// https://www.acmicpc.net/problem/1463

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> v(n + 1);
	v[1] = 0;
	for (int i = 2; i <= n; i++) {
		v[i] = v[i - 1] + 1;
		if (i % 3 == 0) v[i] = min(v[i / 3] + 1, v[i]);
		if (i % 2 == 0) v[i] = min(v[i / 2] + 1, v[i]);
	}
	cout << v[n] << "\n";
	return (0);
}
//int	N;
//int dp[3000001];
//
//void Input()
//{
//	cin >> N;
//}
//
//void Output()
//{
//	cout << dp[N] << "\n";
//}
//
//void Solve()
//{
//	fill_n(dp, N + 1, 1000000);
//	dp[1] = 0;
//	for (int i = 1 ; i <= N ; ++i)
//	{
//		dp[i + 1] = min(dp[i + 1], dp[i] + 1);
//		dp[i * 2] = min(dp[i * 2], dp[i] + 1);
//		dp[i * 3] = min(dp[i * 3], dp[i] + 1);
//	}
//}
//
//int	main(void)
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	Input();
//	Solve();
//	Output();
//	return (0);
//}

