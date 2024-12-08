// https://www.acmicpc.net/problem/28279
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
deque<int> dq;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int cmd;
		cin >> cmd;

		if (cmd == 1)
		{
			int tmp;
			cin >> tmp;
			dq.push_front(tmp);
		}
		else if (cmd == 2)
		{
			int tmp;
			cin >> tmp;
			dq.push_back(tmp);
		}
		else if (cmd == 3)
		{
			if (dq.size())
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else
				cout << -1 << "\n";
		}
		else if (cmd == 4)
		{
			if (dq.size())
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else
				cout << -1 << "\n";
		}
		else if (cmd == 5)
			cout << dq.size() << "\n";
		else if (cmd == 6)
			cout << dq.empty() << "\n";
		else if (cmd == 7)
		{
			if (dq.size())
				cout << dq.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else if (cmd == 8)
		{
			if (dq.size())
				cout << dq.back() << "\n";
			else
				cout << -1 << "\n";
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
