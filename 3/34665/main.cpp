// https://www.acmicpc.net/problem/34665
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string A, B;

void Solve()
{
	cin >> A >> B;

	if (A == B)
		cout << 0;
	else
		cout << 1550;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
