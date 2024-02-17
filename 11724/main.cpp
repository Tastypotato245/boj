// https://www.acmicpc.net/problem/11724
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int	N;
int	M;
queue<int> q;
vector<int> v[1001];
bool visit[1001];
int cnt;

void Bfs(int start)
{
	if (visit[start] == true)
		return ;
	int tmp;
	++cnt;
	q.push(start);
	visit[start] = true;
	while (!q.empty())
	{
		tmp = q.front();
		q.pop();
		for (int i = 0 ; i < v[tmp].size() ; ++i)
		{
			if (visit[v[tmp][i]] == true)
				continue ;
			visit[v[tmp][i]] = true;
			q.push(v[tmp][i]);
		}
	}
}

void Solve()
{
	cin >> N >> M;
	int a, b;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1 ; i <= N ; ++i)
		Bfs(i);
	cout << cnt << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
