// https://www.acmicpc.net/problem/2908
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s1, s2;

void Solve()
{
	cin >> s1 >> s2;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int a = stoi(s1);
	int b = stoi(s2);
	cout << (a > b ? a : b);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
