// https://www.acmicpc.net/problem/9086
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	T;

void Solve()
{
	cin >> T;

	for (int t = 0 ; t < T ; ++t)
	{
		string s;
		cin >> s;
		cout << *s.begin() << *(s.end() - 1) << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
