// https://www.acmicpc.net/problem/14425
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int	N, M;
unordered_set<string> s;

void Solve()
{
	cin >> N >> M;
	string str;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> str;
		s.insert(str);
	}
	int ans = 0;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> str;
		if (s.find(str) != s.end())
			++ans;
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
