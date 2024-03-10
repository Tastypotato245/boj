// https://www.acmicpc.net/problem/1697
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int	N;
int	K;
queue<int> q;
int times[100001];
bool visit[100001];

bool Valid(int pos)
{
	return (pos >= 0 && pos <= 100000 && visit[pos] == false);
}

void Bfs()
{
	int tmp;
	q.push(N);
	while (!q.empty())
	{
		tmp = q.front();
		q.pop();
		if (tmp == K)
			break ;
		if (Valid(tmp + 1))
		{
			visit[tmp + 1] = true;
			times[tmp + 1] = times[tmp] + 1;
			q.push(tmp + 1);
		}
		if (Valid(tmp - 1))
		{
			visit[tmp - 1] = true;
			times[tmp - 1] = times[tmp] + 1;
			q.push(tmp - 1);
		}
		if (Valid(tmp * 2))
		{
			visit[tmp * 2] = true;
			times[tmp * 2] = times[tmp] + 1;
			q.push(tmp * 2);
		}
	}
}

void Solve()
{
	cin >> N;
	cin >> K;
	Bfs();
	cout << times[K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
