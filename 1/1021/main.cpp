// https://www.acmicpc.net/problem/1021
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N, M, cnt;
deque<int> dq;

void Solve()
{
	cin >> N >> M;
	for (int i = 1 ; i <= N ; ++i)
		dq.push_back(i);
	for (int i = 0 ; i < M ; ++i)
	{
		int tmp;
		cin >> tmp;
		int cnt_tmp = 0;
		while (dq.front() != tmp)
		{
			dq.push_back(dq.front());
			dq.pop_front();
			++cnt_tmp;
		}
		if (cnt_tmp > dq.size() / 2)
			cnt_tmp = dq.size() - cnt_tmp;
		dq.pop_front();
		cnt += cnt_tmp;
	}
	cout << cnt << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
