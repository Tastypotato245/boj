// https://www.acmicpc.net/problem/21276
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int	N, C;
string name[1000];

vector<int> parent[1000];
vector<int> child[1000];
int parent_num[1000];
int child_num[1000];

vector<int> answer[1000];

// sorting and indexing
// topology sorting
void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> name[i];
	sort(name, name + N);

	cin >> C;
	// change string into int
	for (int i = 0 ; i < C ; ++i)
	{
		string s1, s2;
		cin >> s1 >> s2;
		int idx1 = lower_bound(name, name + N, s1) - name;
		int idx2 = lower_bound(name, name + N, s2) - name;
		parent_num[idx1]++;
		child_num[idx2]++;
		child[idx2].push_back(idx1);
		parent[idx1].push_back(idx2);
	}

	vector<int> root;
	for (int i = 0 ; i < N ; ++i)
		if (parent_num[i] == 0)
			root.push_back(i);
	cout << root.size() << "\n";
	for (int i : root)
		cout << name[i] << " ";
	cout << "\n";

	// 말단 자식부터 탐색하면서 자식을 넣음. 한 번 넣은 자식은 set에 넣어서 이후에 조상의 자식으로 인식되지 않게 처리

	set<int> s;
	queue<int> bottom_up_q;
	for (int i = 0 ; i < N ; ++i)
		if (child_num[i] == 0)
			bottom_up_q.push(i);

	while (bottom_up_q.size())
	{
		int now = bottom_up_q.front(); bottom_up_q.pop();

		for (int c : child[now])
		{
			if (s.find(c) != s.end())
				continue ;
			answer[now].push_back(c);
			s.insert(c);
		}
		for (int p : parent[now])
			if (--child_num[p] == 0)
				bottom_up_q.push(p);
	}
	
	for (int i = 0 ; i < N ; ++i)
	{
		cout << name[i] << " " << answer[i].size();
		sort(answer[i].begin(), answer[i].end());
		for (int j : answer[i])
			cout << " " << name[j];
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
