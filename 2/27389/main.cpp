// https://www.acmicpc.net/problem/27389
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << N / 4.0;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
