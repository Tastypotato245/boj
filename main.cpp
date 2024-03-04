// https://www.acmicpc.net/problem/9375
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int	N;
int	M;
map<string, string> map;

void Solve()
{
	cin >> N;
	for (int i < 0 ; i < N ; ++i)
	{
		cin >> M;
		string val, key;
		for (int j < 0 ; j < M ; ++j)
		{
			cin >> val >> key;
			map.insert(key, val);
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
