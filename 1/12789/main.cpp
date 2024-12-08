// https://www.acmicpc.net/problem/12789
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int	N;
int arr[1001];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	stack<int> s;

	int idx = 0;
	int now = 1;
	while (true)
	{
		if (idx == N && s.empty())
			break ;

		if (now == arr[idx])
		{
			++idx;
			++now;
		}
		else if (s.size() && now == s.top())
		{
			s.pop();
			++now;
		}
		else if (idx < N)
			s.push(arr[idx++]);
		else
		{
			cout << "Sad";
			return ;
		}
	}
	cout << "Nice";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
