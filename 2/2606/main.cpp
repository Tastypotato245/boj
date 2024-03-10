// https://www.acmicpc.net/problem/2606
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	C;
int	N;
int	ans;

deque<int> dqs[101];
queue<int> q;
int visit[101];

void Bfs()
{
	visit[1] = 1;
	for (int i = 0 ; i < dqs[1].size() ; ++i)
		q.push(dqs[1][i]);
	int tmp;
	while (!q.empty())
	{
		tmp = q.front();
		q.pop();
		if (visit[tmp] == 0)
		{
			++ans;
			visit[tmp] = 1;
			for (int i = 0 ; i < dqs[tmp].size() ; ++i)
				q.push(dqs[tmp][i]);
		}
	}
}

void Solve()
{
	cin >> C;
	cin >> N;
	int a, b;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> a >> b;
		dqs[a].push_back(b);
		dqs[b].push_back(a);
	}
	Bfs();
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
