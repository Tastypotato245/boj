// https://www.acmicpc.net/problem/5430
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int	T;

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		string p;
		int N;
		deque<int> dq;	
		char tmp_c;
		int tmp_i;
		bool reverse = false;
		bool error = false;

		cin >> p;
		cin >> N;
		cin >> tmp_c;
		for (int j = 0 ; j < N ; ++j)
		{
			cin >> tmp_i;
			cin >> tmp_c;
			dq.push_back(tmp_i);
		}
		if (N == 0)
			cin >> tmp_c;
		for (int j = 0 ; j < p.size() ; ++j)
		{
			if (p[j] == 'R')
				reverse = !reverse;
			else
			{
				if (dq.size() <= 0)
				{
					error = true;
					break ;
				}
				if (reverse == true)
					dq.pop_back();
				else
					dq.pop_front();
			}
		}
		if (error == true)
			cout << "error" << "\n";
		else
		{
			cout << "[";
			for (int j = 0 ; j < dq.size() ; ++j)
			{
				if (reverse == true)
					cout << dq[dq.size() - 1 - j];
				else
					cout << dq[j];
				if (j != dq.size() - 1)
					cout << ",";
			}
			cout << "]\n";
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
