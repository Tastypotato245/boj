// https://www.acmicpc.net/problem/13241
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

long long int A, B;

void Solve()
{
	cin >> A >> B;
	cout << lcm(A, B);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
