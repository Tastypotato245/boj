// https://www.acmicpc.net/problem/1389
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int	N;
int	M;

int arr[101][101];
int ans = -1;
int bacon_min = -1;

void Solve()
{
	cin >> N >> M;
	vector<int> v[N + 1];
	int a, b;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1 ; i <= N ; ++i)
	{
		queue<int> q;
		bool visit[101] = { 0, };
		int cnt = 1;
		visit[i] = true;
		for (int j = 0 ; j < v[i].size() ; ++j)
		{
			q.push(v[i][j]);
			visit[v[i][j]] = true;
		}
		while (!q.empty())
		{
			int qlen = q.size();
			for (int j = 0 ; j < qlen ; ++j)
			{
				arr[i][q.front()] = cnt;
				for (int k = 0 ; k < v[q.front()].size() ; ++k)
				{
					if (visit[v[q.front()][k]] == false && arr[i][v[q.front()][k]] == 0)
					{
						visit[v[q.front()][k]] = true;
						q.push(v[q.front()][k]);
					}
				}
				q.pop();
			}
			++cnt;
		}
	}
//	for (int i = 1 ; i <= N ; ++i)
//	{
//		for (int j = 1 ; j <= N ; ++j)
//			cout << arr[i][j] << " ";
//		cout << "\n";
//	}
	for (int i = 1 ; i <= N ; ++i)
	{
		int bacon_num = 0;

		for (int j = 1 ; j <= N ; ++j)
			bacon_num += arr[i][j];
		if (ans == -1)
		{
			ans = i;
			bacon_min = bacon_num;
		}
		else if (bacon_num < bacon_min)
		{
			bacon_min = bacon_num;
			ans = i;
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
