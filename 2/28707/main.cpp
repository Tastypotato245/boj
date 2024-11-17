// https://www.acmicpc.net/problem/28707
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>

using namespace std;
using iv = pair<int, vector<int> >;
using iii = tuple<int, int, int>;

int	N, M;
priority_queue<iv, vector<iv>, greater<iv> > pq;
vector<iii> change;
vector<int> v;
vector<int> answer_v;
set<vector<int> > vis_set;

bool isSame(vector<int> a, vector<int> b)
{
	for (int i = 0 ; i < a.size() ; ++i)
		if (a[i] != b[i])
			return (false);
	return (true);
}

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

// 그래프
void Solve()
{
	cin >> N;
	v.resize(N);
	answer_v.resize(N);
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> v[i];
		answer_v[i] = v[i];
	}

	cin >> M;
	for (int i = 0 ; i < M ; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		change.emplace_back(a, b, c);
	}

	sort(answer_v.begin(), answer_v.end());

	pq.push({0, v});
	while (!pq.empty())
	{
		auto [cost, now_v] = pq.top();
		pq.pop();

		if (isSame(answer_v, now_v))
		{
			cout << cost << "\n";
			return ;
		}
		if (vis_set.find(now_v) != vis_set.end())
			continue ;
		vis_set.insert(now_v);
		for (auto item : change)
		{
			auto [a, b, c] = item;
			swap(now_v[a - 1], now_v[b - 1]);

			int ncost = cost + c;
			pq.emplace(ncost, now_v);

			swap(now_v[a - 1], now_v[b - 1]);
		}
	}
	cout << "-1" << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
