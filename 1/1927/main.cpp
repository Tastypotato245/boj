// https://www.acmicpc.net/problem/1927
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;

priority_queue<int, vector<int>, greater<int> > pq;
void Solve()
{
	int tmp;
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
