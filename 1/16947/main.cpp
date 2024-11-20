// https://www.acmicpc.net/problem/16947
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
vector<int> v[3001];
bool vis[3001];
int connection[3001];
int ans[3001];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int s, d;
		cin >> s >> d;
		v[s].push_back(d);
		v[d].push_back(s);
		connection[s]++;
		connection[d]++;
	}

	queue<int> q;
	for (int i = 1 ; i <= N ; ++i)
		if (connection[i] == 1)
			q.push(i);

	while(q.size())
	{
		int now = q.front(); q.pop();
		connection[now]--;
		for (int dst : v[now])
			if (connection[dst] != 0 && --connection[dst] == 1)
				q.push(dst);
	}

	for (int i = 1 ; i <= N ; ++i)
	{
		if (connection[i] >= 2)
		{
			//bfs;
			queue<int> q;
			q.push(i);

			while (q.size())
			{
				int now = q.front(); q.pop();
				for (int dst : v[now])
				{
					if (connection[dst] != 0 || ans[dst] != 0)
						continue ;
					ans[dst] = ans[now] + 1;
					q.push(dst);
				}
			}
		}
	}
	
	for (int i = 1 ; i <= N ; ++i)
		cout << ans[i] << " ";
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
