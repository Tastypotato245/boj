// https://www.acmicpc.net/problem/1068
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int	N;
int root_node, del_node, ans;
vector<int> nodes[50];


void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp == -1)
			root_node = i;
		else
			nodes[tmp].push_back(i);
	}
	cin >> del_node;

	// root_node가 가진 자식들을 돌며 리프 노드 도달 시 ++ans
	queue<int> q;
	if (del_node != root_node)
		q.push(root_node);
	while (!q.empty())
	{
		int now = q.front();
	
		q.pop();
		for (auto item : nodes[now])
		{
			if (item != del_node)
			{
				if (nodes[item].size() != 0)
					q.push(item);
				else
					++ans;
			}
			else if (nodes[now].size() == 1)
			{
				++ans;
			}
		}
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
