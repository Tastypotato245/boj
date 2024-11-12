// https://www.acmicpc.net/problem/1197
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <tuple>

using namespace std;
using tiii = tuple<int, int, int>;

int	V, E;
int parent[10001];
priority_queue<tiii, vector<tiii>, greater<tiii> > pq;


int find(int p)
{
    if(parent[p] == p)
		return p;
    return parent[p] = find(parent[p]);
}

void uni(int a, int b){
    int x = parent[a], y = parent[b];

    if(x == y)
		return;

    parent[x] = parent[y];
}

void Solve()
{
	cin >> V >> E;

	for (int i = 1 ; i <= V ; ++i)
		parent[i] = i;

	for (int i = 0 ; i < E ; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;

		pq.push({c, a, b});
	}

	int ans = 0, cnt = 0, max_edge = V - 1;
	while (cnt < max_edge)
	{
		int a, b, c;
		tie(c, a, b) = pq.top();

		pq.pop();
		if (find(a) == find(b))
			continue ;
		uni(a, b);
		ans += c;
		++cnt;
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
