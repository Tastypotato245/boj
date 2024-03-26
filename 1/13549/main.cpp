// https://www.acmicpc.net/problem/13549
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N, K;

int arr[100001];
bool visit[100001];

bool IsOk(int pos)
{
	return (pos >= 0 && pos <= 100000);
}

void Solve()
{
	cin >> N >> K;
	queue<int> q;
	visit[N] = true;
	q.push(N);
	while (!q.empty())
	{
		int pos = q.front();
		q.pop();
		if (pos == K)
			break;
		if (IsOk(pos * 2) && visit[pos * 2] == false)
		{
			arr[pos * 2] = arr[pos];
			visit[pos * 2] = true;
			q.push(pos * 2);
		}
		if (IsOk(pos - 1) && visit[pos - 1] == false)
		{
			arr[pos - 1] = arr[pos] + 1;
			visit[pos - 1] = true;
			q.push(pos - 1);
		}
		if (IsOk(pos + 1) && visit[pos + 1] == false)
		{
			arr[pos + 1] = arr[pos] + 1;
			visit[pos + 1] = true;
			q.push(pos + 1);
		}
	}
	cout << arr[K] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
