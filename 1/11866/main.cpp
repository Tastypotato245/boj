// https://www.acmicpc.net/problem/11866

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	N;
int K;
queue<int> q;

void Input()
{
	cin >> N;
	cin >> K;
	for (int i = 0 ; i < N ; ++i)
		q.push(i + 1);
}

void Solve()
{
	cout << "<";
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < K ; ++j)
		{
			if (j == K - 1)
			{
				cout << q.front();
				if (i != N - 1)
					cout << ", ";
			}
			else
				q.push(q.front());
			q.pop();
		}
	}
	cout << ">\n";
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	return (0);
}
