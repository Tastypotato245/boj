// https://www.acmicpc.net/problem/1967
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int	N;
int best = 0;
vector<vector<pair<int, int> > > nodes;

void find_top_two(vector<pair<int, int> >& node, int *f, int *s)
{
	if (node.size() == 0)
	{
		*f = 0;
		*s = 0;
		return ;
	}
	pair<int, int> tmp;
	tmp = *max_element(node.begin(), node.end());
	*f = tmp.first;
	*s = 0;
	for (const auto& edge : node)
		if (edge.second != tmp.second)
			*s = max(*s, edge.first);
}

void dfs(int root, int now, int index, int *f, int *s)
{
	for (int i = 0 ; i < nodes[now].size() ; ++i)
		dfs(now, nodes[now][i].second, i, f, s);
	find_top_two(nodes[now], f, s);
	if (root != -1)
		nodes[root][index].first += *f;
	best = max(best, *f + *s);
}

void Solve()
{
	cin >> N;
	nodes.resize(N + 1);
	for (int i = 1 ; i < N ; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		nodes[a].push_back({c, b});
	}
	int f = 0, s = 0;
	dfs(-1, 1, -1, &f, &s);
//	cout << f << ", " << s << "\n";
	cout << best << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
