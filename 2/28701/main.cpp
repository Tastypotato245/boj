// https://www.acmicpc.net/problem/28701
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	int sum = 0;
	for (int i = 1 ; i <= N ; ++i)
		sum += i;

	int mul = 0;
	mul = sum * sum;

	int tri = 0;
	for (int i = 1 ; i <= N ; ++i)
		tri += i * i * i;

	cout << sum << "\n";
	cout << mul << "\n";
	cout << tri << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
