// https://www.acmicpc.net/problem/11286
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;

struct cmp
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return (a > b);
		return (abs(a) > abs(b));
	}
};

priority_queue<int, vector<int>, cmp> pq;

void Solve()
{
	cin >> N;
	int tmp;
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
