// https://www.acmicpc.net/problem/
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int	N;
set<string> ss;

void Solve()
{
	cin >> N;
	string a, b;
	ss.insert("ChongChong");
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> a >> b;
		if (ss.find(a) != ss.end())
			ss.insert(b);
		else if (ss.find(b) != ss.end())
			ss.insert(a);
	}
	cout << ss.size();
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
