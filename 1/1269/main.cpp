// https://www.acmicpc.net/problem/1269
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int	a, b;
set<int> s;

void Solve()
{
	cin >> a >> b;

	int tmp;
	for (int i = 0 ; i < a ; ++i)
	{
		cin >> tmp;
		s.insert(tmp);
	}
	for (int i = 0 ; i < b ; ++i)
	{
		cin >> tmp;
		if (s.find(tmp) != s.end())
			s.erase(tmp);
		else
			s.insert(tmp);
	}
	cout << s.size();
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
