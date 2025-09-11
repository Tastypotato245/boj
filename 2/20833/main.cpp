// https://www.acmicpc.net/problem/20833
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long sum, N;

void Solve()
{
	cin >> N;
	for (int i = 1 ; i <= N ; ++i)
		sum += i * i * i;
	cout << sum;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
