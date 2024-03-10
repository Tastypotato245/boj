// https://www.acmicpc.net/problem/1966

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	T;
int N;
int Pos;

void Solve()
{
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> N >> Pos;
		queue<pair<int, int> > q;
		priority_queue<int> pq;
		int cnt = 0;
		for (int j = 0; j < N; ++j)
		{
			int tmp;
			cin >> tmp;
			q.push({j, tmp});
			pq.push(tmp);
		}
		while (!q.empty())
		{
			if (q.front().second == pq.top())
			{
				++cnt;
				pq.pop();
				if (q.front().first == Pos)
				{
					q.pop();
					cout << cnt << "\n";
					break ;
				}
				q.pop();
			}
			else
			{
				q.push(q.front());
				q.pop();
			}
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
