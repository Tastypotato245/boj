// https://www.acmicpc.net/problem/13597
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B;

void Solve()
{
	cin >> A >> B;
	cout << max(A, B);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
