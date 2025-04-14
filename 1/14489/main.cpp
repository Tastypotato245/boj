// https://www.acmicpc.net/problem/14489
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int A, B, cost;

void Solve()
{
	cin >> A >> B;
	cin >> cost;

	int sum = A + B;
	int change = sum - (cost * 2);
	cout << (change >= 0 ? change : sum);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
