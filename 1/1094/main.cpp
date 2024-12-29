// https://www.acmicpc.net/problem/1094
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	X, N = 64;
int sum = N;

deque<int> dq;

void Solve()
{
	cin >> X;

	dq.push_front(N);
	while (sum > X)
	{
		int now = dq.front(); dq.pop_front();
		int a = now / 2;
		dq.push_front(a);

		sum = 0;
		for (auto i : dq)
			sum += i;

		if (sum < X)
		{
			sum += a;
			dq.push_front(a);
		}
	}
	cout << dq.size();
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
