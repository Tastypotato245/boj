// https://www.acmicpc.net/problem/27433
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

long long fact(long long n)
{
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}

void Solve()
{
	cin >> N;
	cout << fact(N);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
