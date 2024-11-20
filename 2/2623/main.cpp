// https://www.acmicpc.net/problem/2623
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int	N, M;
vector<int> v[1001];
int in_degree[1001];

// trivial topology sort
void Solve()
{
	cin >> N >> M;

	// input
	for (int i = 0 ; i < M ; ++i)
	{
		int l, s;
		cin >> l;
		cin >> s;
		for (int j = 1 ; j < l ; ++j)
		{
			int d;
			cin >> d;
			v[s].push_back(d);
			in_degree[d]++;
			s = d;
		}
	}

	// cal
	queue<int> q;
	queue<int> ansq;

	for (int i = 1 ; i <= N ; ++i)
		if (in_degree[i] == 0)
			q.push(i);
	while (q.size())
	{
		int now = q.front(); q.pop();
		ansq.push(now);
		for (int dst : v[now])
		{
			if (--in_degree[dst] == 0)
				q.push(dst);
		}
	}
	if (ansq.size() != N)
		cout << "0" << "\n";
	else
		while (ansq.size())
		{
			cout << ansq.front() << "\n";
			ansq.pop();
		}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
