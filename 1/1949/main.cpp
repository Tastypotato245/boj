// https://www.acmicpc.net/problem/1949
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
int tdp[2][10001];
int people[10001];
bool vis[10001];
vector<int> v[10001];

// dfs할 때 vis를 true 찍어놓기
// 1. tdp[1][dst]또는 그것보다도 tdp[0][dst]가 크다면 그것. 들의 합 tdp[0][now] 에 저장
// 2. 또는 자식이 자기 자신을 포함하지 않은 tdp[0][dst] + now의 값을 tdp[1][now] 에 저장

void dfs(int now)
{
	vis[now] = true;
	tdp[1][now] = people[now];
	for (int dst : v[now])
	{
		if (vis[dst])
			continue ;
		dfs(dst);
		tdp[0][now] += max(tdp[0][dst], tdp[1][dst]);
		tdp[1][now] += tdp[0][dst];
	}
}

// dfs tree dp
void Solve()
{
	// input
	cin >> N;
	for (int i = 1 ; i <= N ; ++i)
		cin >> people[i];
	for (int i = 0 ; i < N - 1 ; ++i)
	{
		int s, d;
		cin >> s >> d ;
		v[s].push_back(d);
		v[d].push_back(s);
	}

	// 어떤 노드를 선택하든 트리임.
	// 1이 루트라 가정하고 풂.
	// 답도 리프에서 타고 올라와 tdp[0][1] 또는 tdp[1][1]에 저장.
	dfs(1);
	cout << max(tdp[0][1], tdp[1][1]) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
