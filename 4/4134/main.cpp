// https://www.acmicpc.net/problem/4134
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long	T, N;

bool isPrime(long long n)
{
	for (long long i = 3 ; i <= sqrt(n) ; ++i)
		if (n % i == 0)
			return (false);
	return true;
}

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		cin >> N;
		long long now = N;
		if (now <= 2)
		{
			cout << 2 << "\n";
			continue ;
		}
		if (now % 2 == 0)
			++now;
		for (; !isPrime(now) ; now += 2);
		cout << now << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
