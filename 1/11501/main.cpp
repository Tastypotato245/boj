// https://www.acmicpc.net/problem/11501
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T;

void Solve()
{
	cin >> T;
	for (int t = 0 ; t < T ; ++t)
	{
		int N;
		cin >> N;
		long long stock_cost[N];
		for (int i = 0 ; i < N ; ++i)
			cin >> stock_cost[i];
		
		int now = stock_cost[N - 1];
		long long ans = 0;
		for (int i = N - 2 ; i >= 0 ; --i)
		{
			if(now < stock_cost[i])
				now = stock_cost[i];
			else
				ans += now - stock_cost[i];
		}
		cout << ans << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
