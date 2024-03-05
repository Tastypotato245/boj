// https://www.acmicpc.net/problem/9375
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int	N;
int	M;
long long sum;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> M;
		sum = 1;
		map<string, int> m;
		string val, key;
		for (int j = 0 ; j < M ; ++j)
		{
			cin >> val >> key;
			if (m.find(key) != m.end())
				m[key] += 1;
			else
				m[key] = 1;
		}
		for (auto item : m)
			sum *= (item.second + 1);
		sum -= 1;
		cout << sum << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
