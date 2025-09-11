// https://www.acmicpc.net/problem/20499
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	K, D, A;
char slash;

void Solve()
{
	cin >> K >> slash >> D >> slash >> A;
	cout << (K + A < D || D == 0 ? "hasu" : "gosu");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
