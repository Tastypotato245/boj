// https://www.acmicpc.net/problem/1922
// github/Tastypotato245
#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;

int	N, M;

tuple<int, int, int> edges[100000];
int p[1001];
int ans;

int find_parent(int a)
{
	if (p[a] == a)
		return (a);
	else
		return (p[a] = find_parent(p[a]));
}

bool union_find(int a, int b)
{
	int p_a = find_parent(a);
	int p_b = find_parent(b);
	if (p_a != p_b)
	{
		p[p_b] = p_a;
		return (true);
	}
	return (false);
}

void Solve()
{
	cin >> N >> M;
	int a, b, c;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> a >> b >> c;
		edges[i] = {c, a, b};
	}
	for (int i = 1 ; i <= N ; ++i)
		p[i] = i;
	sort(edges, edges + M);
	for (auto& [c, a, b] : edges)
		if (union_find(a, b))
			ans += c;
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
