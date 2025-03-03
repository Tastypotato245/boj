// https://www.acmicpc.net/problem/28113
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, A, B;

void Solve()
{
	cin >> N >> A >> B;

	if (A < B)
		cout << "Bus";
	else if (A == B)
		cout << "Anything";
	else
		cout << "Subway";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
