// https://www.acmicpc.net/problem/11657
// github/Tastypotato245
#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <climits>

using namespace std;

int	N, M;
vector<tuple<int, int, int> > vec(6001);
long long ans[501];

void Solve()
{
	cin >> N >> M;
	fill(ans + 2, ans + 501, INT_MAX);
	int a, b, c;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> a >> b >> c;
		vec[i] = {a, b, c};
	}
	for (int i = 1 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
		{
			int u = get<0>(vec[j]), v = get<1>(vec[j]), val = get<2>(vec[j]);
			if (ans[u] != INT_MAX)
				ans[v] = min(ans[u] + val, ans[v]);
		}
	bool flag = false;
	for (int j = 0 ; j < M ; ++j)
	{
		long long u, v, val;
		tie(u, v, val) = vec[j];
		if (ans[u] != INT_MAX)
			if (ans[v] > ans[u] + val)
			{
				flag = true;
				break ;
			}
	}
	if (flag == false)
		for (int i = 2 ; i <= N ; ++i)
			cout << (ans[i] == INT_MAX ? -1 : ans[i]) << "\n";
	else
		cout << "-1" << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
