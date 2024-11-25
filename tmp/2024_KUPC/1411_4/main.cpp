// https://www.acmicpc.net/problem/1411_4
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
using ii = pair<int, int>;

int	N, K;
vector<int> v;

// number, <start, end>
map<int, ii> m;

// 어떤 number에 대해 K번 지웠을 때 최대길이
int dp[5001];

//dp
void Solve()
{
	cin >> N >> K;
	v.resize(N);
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> v[i];
		if (m.find(v[i]) == m.end())
			m[v[i]] = {i, i};
		else
		{
			auto [s, e] = m[v[i]];
			m[v[i]] = {s, i};
		}
	}


	int ans = 0;
	for (auto [num, se] : m)
	{
		int e = se.second;
		fill(dp, dp + K + 1, 0);
		for (int s = se.first ; s <= e ; ++s)
		{
			for (int k = K ; k >= 0 ; --k)
			{
				if (v[s] == num)
					dp[k] += 1;
				else
				{
					if (k == 0)
						dp[k] = 0;
					else
						dp[k] = dp[k - 1];
				}
			}
		}
		ans = max(ans, *max_element(dp, dp + K + 1));
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
