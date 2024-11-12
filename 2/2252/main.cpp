// https://www.acmicpc.net/problem/2252
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int	N, M;
int in_degree[32001];

void Solve()
{
	cin >> N >> M;

	vector<int> v[N + 1];

	for (int i = 0 ; i < M ; ++i)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		in_degree[b]++;
	}

	queue<int> q;
	for (int i = 1 ; i <= N ; ++i)
		if (in_degree[i] == 0)
			q.push(i);

	while (!q.empty())
	{
		int now = q.front();
		q.pop();

		cout << now << " ";
		for (int i : v[now])
		{
			--in_degree[i];
			if (in_degree[i] == 0)
				q.push(i);
		}
	}
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
