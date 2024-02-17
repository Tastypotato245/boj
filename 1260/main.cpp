// https://www.acmicpc.net/problem/1260
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
int	M;
int	V;

deque<int> dqs[1001];

void Input()
{
	cin >> N;
	cin >> M;
	cin >> V;

	int s, e;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> s >> e;
		dqs[s].push_back(e);
		dqs[e].push_back(s);
	}
	for (int i = 1 ; i <= N ; ++i)
		if (!dqs[i].empty())
			sort(dqs[i].begin(), dqs[i].end());
}

int visitD[1001];
void Dfs(int pos)
{
	visitD[pos] = 1;
	cout << pos << " ";
	for (int i = 0 ; i < dqs[pos].size() ; ++i)
		if (visitD[dqs[pos][i]] == 0)
			Dfs(dqs[pos][i]);
}

int visitB[1001];
queue<int> q;
void Bfs()
{
	int tmp;
	visitB[V] = 1;
	q.push(V);
	while (!q.empty())
	{
		tmp = q.front();
		cout << tmp << " ";
		q.pop();
		for (int i = 0 ; i < dqs[tmp].size(); ++i)
		{
			if (visitB[dqs[tmp][i]] == 0)
			{
				visitB[dqs[tmp][i]] = 1;
				q.push(dqs[tmp][i]);
			}
		}
	}
}

void Solve()
{
	Dfs(V);
	cout << "\n";
	Bfs();
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Input(); Solve();
	return (0);
}
