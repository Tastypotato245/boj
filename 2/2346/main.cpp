// https://www.acmicpc.net/problem/2346
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
deque<pair<int, int> > dq;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int tmp;
		cin >> tmp;
		dq.push_back({i + 1, tmp});
	}
	while (dq.size())
	{
		auto [num, move] = dq.front(); dq.pop_front();
		cout << num << " ";

		if (move > 0)
			for (int i = 0 ; i < move - 1 ; ++i)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		else
			for (int i = move ; i < 0 ; ++i)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
