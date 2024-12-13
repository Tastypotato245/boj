// https://www.acmicpc.net/problem/21278
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
using ii = pair<int, int>;

int	N, M;
vector<int> v[101];
bool vis[101];

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < M ; ++i)
	{
		int src, dst;
		cin >> src >> dst;
		v[src].push_back(dst);
		v[dst].push_back(src);
	}

	int ans = 1000000000;
	ii ans_idx;
	for (int a = 1 ; a < N ; ++a)
	{
		for (int b = a + 1 ; b <= N ; ++b)
		{
			int tmp_ans = 0;
			
			fill(vis, vis + N + 1, false);

			queue<ii> q;
			q.push({0, a});
			q.push({0, b});
			vis[a] = true;
			vis[b] = true;

			while (q.size())
			{
				auto [cost, now] = q.front(); q.pop();
				
				for (auto dst : v[now])
				{
					if (vis[dst])
						continue ;
					vis[dst] = true;
					tmp_ans += cost + 1;
					q.push({cost + 1, dst});
				}
			}
			if (tmp_ans * 2 < ans)
			{
				ans_idx = {a, b};
				ans = tmp_ans * 2;
			}
		}
	}
	cout << ans_idx.first << " " << ans_idx.second << " " << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
