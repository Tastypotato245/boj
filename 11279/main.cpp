// https://www.acmicpc.net/problem/11279
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
int tmp;
priority_queue<int> pq;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> tmp;
		if (tmp == 0)
		{
			if (pq.empty())
				cout << "0" << "\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
			pq.push(tmp);
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
