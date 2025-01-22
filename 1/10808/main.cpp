// https://www.acmicpc.net/problem/10808
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int alpha[26];

void Solve()
{
	cin >> s;
	for (auto c : s)
		alpha[c - 'a']++;
	for (int i = 0 ; i < 26 ; ++i)
		cout << alpha[i] << " ";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
