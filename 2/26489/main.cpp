// https://www.acmicpc.net/problem/26489
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
string s;

void Solve()
{
	while (getline(cin, s))
		++N;
	cout << N;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
