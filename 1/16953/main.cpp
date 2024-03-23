// https://www.acmicpc.net/problem/16953
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int	A, B, ans = 0;

void Solve()
{
	cin >> A >> B;	
	queue<pair<long long, int>> q;
	q.push({A, 1});
	while (!q.empty())
	{
		if (q.front().first == B)
		{
			cout << q.front().second << "\n";
			return ;
		}
		if (q.front().first * 10 + 1 <= B)
			q.push({q.front().first * 10 + 1, q.front().second + 1});
		if (q.front().first * 2 <= B)
			q.push({q.front().first * 2, q.front().second + 1});
		q.pop();
	}
	cout << "-1" << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
