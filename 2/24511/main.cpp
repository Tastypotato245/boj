// https://www.acmicpc.net/problem/24511
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N, M;
bool type[100000];
deque<int> dq;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> type[i];
	for (int i = 0 ; i < N ; ++i)
	{
		int tmp;
		cin >> tmp;
		if (type[i] == 0)
			dq.push_back(tmp);
	}
	cin >> M;
	for (int i = 0 ; i < M ; ++i)
	{
		int tmp;
		cin >> tmp;
		dq.push_front(tmp);
		cout << dq.back() << " ";
		dq.pop_back();
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
