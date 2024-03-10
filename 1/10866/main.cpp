// https://www.acmicpc.net/problem/10866

#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int	N;
string str;
int tmp;
deque<int> dq;

void Input()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> str;
		if (str.compare("push_front") == 0)
		{
			cin >> tmp;
			dq.push_front(tmp);
		}
		else if (str.compare("push_back") == 0)
		{
			cin >> tmp;
			dq.push_back(tmp);
		}
		else if (str.compare("pop_front") == 0)
		{
			if (dq.empty())
			{
				cout << "-1" << "\n";
				continue ;
			}
			cout << dq.front() << "\n";
			dq.pop_front();
		}
		else if (str.compare("pop_back") == 0)
		{
			if (dq.empty())
			{
				cout << "-1" << "\n";
				continue ;
			}
			cout << dq.back() << "\n";
			dq.pop_back();
		}
		else if (str.compare("size") == 0)
			cout << dq.size() << "\n";
		else if (str.compare("empty") == 0)
			cout << (int)dq.empty() << "\n";
		else if (str.compare("front") == 0)
		{
			if (dq.empty())
			{
				cout << "-1" << "\n";
				continue ;
			}
			cout << dq.front() << "\n";
		}
		else if (str.compare("back") == 0)
		{
			if (dq.empty())
			{
				cout << "-1" << "\n";
				continue ;
			}
			cout << dq.back() << "\n";
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	return (0);
}
