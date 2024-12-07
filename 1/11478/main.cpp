// https://www.acmicpc.net/problem/11478
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>

using namespace std;

string s;
unordered_set<string> ss;

void Solve()
{
	cin >> s;
	for (int i = 1 ; i <= s.size() ; ++i)
		for (int j = 0 ; j + i <= s.size() ; ++j)
			ss.insert(s.substr(j, i));
	cout << ss.size();	
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
