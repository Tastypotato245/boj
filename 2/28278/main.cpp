// https://www.acmicpc.net/problem/28278
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	stack<int> s;
	for (int i = 0 ; i < N ; ++i)
	{
		int cmd;
		cin >> cmd;
		if (cmd == 1)
		{
			int tmp;
			cin >> tmp;
			s.push(tmp);
		}
		else if (cmd == 2)
		{
			if (s.size())
			{
				cout << s.top() << "\n";
				s.pop();
			}
			else
				cout << -1 << "\n";
		}
		else if (cmd == 3)
			cout << s.size() << "\n";
		else if (cmd == 4)
			cout << s.empty() << "\n";
		else if (cmd == 5)
		{
			if (s.size())
				cout << s.top() << "\n";
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
