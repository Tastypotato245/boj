// https://www.acmicpc.net/problem/10773

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
int K;
deque<int> dq;

void Input()
{
	int tmp;

	cin >> K;
	dq.resize(K);
	for (int i = 0; i < K ; ++i)
	{
		cin >> tmp;
		if (tmp == 0)
			dq.pop_back();
		else
			dq.push_back(tmp);
	}
}

void Solve()
{
	long long sum = 0;
	for (int i = 0; i < dq.size() ; ++i)
		sum += dq[i];
	cout << sum << "\n";
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
