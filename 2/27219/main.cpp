// https://www.acmicpc.net/problem/27219
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N / 5 ; ++i)
		cout << "V";
	for (int i = 0 ; i < N % 5 ; ++i)
		cout << "I";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
