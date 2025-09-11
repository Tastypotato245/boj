// https://www.acmicpc.net/problem/25238
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double A, B;

void Solve()
{
	cin >> A >> B;
	cout << (A - A * B / 100 < 100 ? "1" : "0" );
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
