// https://www.acmicpc.net/problem/5214
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#define INF 1000000000

using namespace std;
using ii = pair<int, int>;

int	N, K, M;
bool vis[100001];

void Solve()
{
	cin >> N >> K >> M;

	vector<int> hypers[M];
	vector<int> connection[N + 1];

	for (int i = 0 ; i < M ; ++i)
	{
		for (int k = 0 ; k < K ; ++k)
		{
			int tmp;
			cin >> tmp;
			hypers[i].push_back(tmp);
			connection[tmp].push_back(i);
		}
	}

	queue<ii> q;

	int ans = INF;
	q.push({1, 1});
	vis[1] = true;
	while (q.size())
	{
		auto [cost, now] = q.front();
		q.pop();

		if (now == N)
		{
			ans = cost;
			break ;
		}
		for (int hyper_num : connection[now])
			for (int dst : hypers[hyper_num])
			{
				if (vis[dst])
					continue ;
				vis[dst] = true;
				q.push({cost + 1, dst});
			}
	}
	cout << (ans == INF ? -1 : ans) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
