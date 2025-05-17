// https://www.acmicpc.net/problem/11121
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;
string s1, s2;

void Solve()
{
	cin >> N;


	for (int i = 0 ; i < N ; ++i)
	{
		cin >> s1 >> s2;
		cout << (s1 == s2 ? "OK" : "ERROR") << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
