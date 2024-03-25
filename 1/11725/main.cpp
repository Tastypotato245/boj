// https://www.acmicpc.net/problem/11725
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int	N;
int arr[100001];

void Solve()
{
	cin >> N;
	vector<int> v[N + 1];
	for (int i = 0 ; i < N - 1 ; ++i)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	queue<int> q;
	q.push(1);
	while (!q.empty())
	{
		for (int i = 0 ; i < v[q.front()].size() ; ++i)
		{
			if (arr[v[q.front()][i]] == 0)
			{
				arr[v[q.front()][i]] = q.front();
				q.push(v[q.front()][i]);
			}
		}
		q.pop();
	}
	for (int i = 2 ; i <= N ; ++i)
		cout << arr[i] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
