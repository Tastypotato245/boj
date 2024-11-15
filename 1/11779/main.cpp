// https://www.acmicpc.net/problem/11779
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
using ii = pair<int, int>;

int	N, M, s, d;
int dis[1001];
int tracking[1001];
vector<ii> v[1001];

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < M ; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v[a].emplace_back(c, b);
	}
	cin >> s >> d;
	priority_queue<ii, vector<ii>, greater<ii> > pq;

	fill(dis, dis + 1001, 1000000000);
	pq.emplace(0, s);
	dis[s] = 0;
	while (!pq.empty())
	{
		auto [cost, dst] = pq.top();
		pq.pop();
		if (cost > dis[dst])
			continue ;
		for (auto [ncost, ndst] : v[dst])
		{
			ncost += cost;
			if (ncost < dis[ndst])
			{
				dis[ndst] = ncost;
				tracking[ndst] = dst;
				pq.emplace(ncost, ndst);
			}
		}
	}
	cout << dis[d] << "\n";

	stack<int> s;
	for (int tmp = d ; tmp != 0 ; tmp = tracking[tmp])
		s.push(tmp);

	cout << s.size() << "\n";
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
