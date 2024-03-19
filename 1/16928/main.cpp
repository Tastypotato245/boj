// https://www.acmicpc.net/problem/16928
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int	N, M;
int arr[101];
bool visit[101];
short path[101];
bool path_visit[101];

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N + M ; ++i)
	{
		int t1, t2;
		cin >> t1 >> t2;
		path[t1] = t2;
	}
	queue<short> q;
	q.push(1);
	fill_n(arr, 101, 10000);
	arr[1] = 0;
	while (!q.empty())
	{
		if (path[q.front()] != 0)
		{
			if (path_visit[q.front()] == false)
			{
				path_visit[q.front()] = true;
				fill(visit + path[q.front()], visit + 101, false);
				arr[path[q.front()]] = min(arr[path[q.front()]], arr[q.front()]);
				q.push(path[q.front()]);
			}
		}
		else if (visit[q.front()] == false)
		{
			visit[q.front()] = true;
			for (int i = 1 ; i <= 6 ; ++i)
			{
				if (q.front() + i <= 100)
				{
					arr[q.front() + i] = min(arr[q.front() + i], arr[q.front()] + 1);
					q.push(q.front() + i);
				}
			}
		}
		q.pop();
	}
//	for (int i = 0 ; i <= 100 ; ++i)
//		cout << i << ": " << arr[i] << "\n";
	cout << arr[100] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}

