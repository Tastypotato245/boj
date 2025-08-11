// https://www.acmicpc.net/problem/21875
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;

void Solve()
{
	string A, B;
	cin >> A >> B;

	int n = abs(A[0] - B[0]);
	int m = abs(A[1] - B[1]);

	cout << min(n, m) << ' ' << max(n, m);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
