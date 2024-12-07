// https://www.acmicpc.net/problem/7785
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int	N;
set<string> s;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (s2 == "enter")
			s.insert(s1);
		else
			s.erase(s1);
	}

	for (auto start = s.rbegin() ; start != s.rend() ; start++)
		cout << *start << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
