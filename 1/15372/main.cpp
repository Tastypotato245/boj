// https://www.acmicpc.net/problem/15372
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T;
long long N;

void Solve()
{
	cin >> T;
	for (int t = 0 ; t < T ; ++t)
	{
		cin >> N;
		cout << N * N << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
