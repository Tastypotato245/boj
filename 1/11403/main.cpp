// https://www.acmicpc.net/problem/11403
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
bool arr[100][100];
bool visit[100];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < N ; ++j)
			cin >> arr[i][j];
	for (int i = 0 ; i < N ; ++i)
	{
		queue<int> q;
		fill_n(visit, 100, false);
		for (int j = 0 ; j < N ; ++j)
			if (arr[i][j] == 1)
				q.push(j);
		visit[i] = true;
		while (!q.empty())
		{
			for (int k = 0 ; k < N ; ++k)
			{
				if (arr[q.front()][k] == true)
				{
					arr[i][k] = true;
					if (visit[k] == false)
					{
						visit[k] = true;
						q.push(k);
					}
				}
			}
			q.pop();
		}
	}
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < N ; ++j)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
