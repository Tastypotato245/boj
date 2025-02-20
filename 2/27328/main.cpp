// https://www.acmicpc.net/problem/27328
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B;

void Solve()
{
	cin >> A >> B;
	if (A == B)
		cout << "0";
	else if (A < B)
		cout << "-1";
	else
		cout << "1";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
