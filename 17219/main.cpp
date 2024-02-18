// https://www.acmicpc.net/problem/17219
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;

int	N;
int	M;

void Solve()
{
	cin >> N >> M;
	string key, val;
	unordered_map<string, string> m;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> key >> val;
		m[key] = val;
	}
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> key;
		cout << m[key] << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
