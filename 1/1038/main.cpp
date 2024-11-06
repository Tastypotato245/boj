// https://www.acmicpc.net/problem/1038
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N; int cnt;
long long ans = -1;

void bruteForce(long long num, int pre, int size)
{
	if (size == 0)
	{
		++cnt;
		if (N == cnt - 1)
		{
			ans = num;
			return ;
		}
	}
	for (int i = 0 ; i <= pre ; ++i)
	{
		if (num == 0 && i == 0)
			continue ;
		bruteForce(num * 10 + (long long)i, i - 1, size - 1);
	}
}

void Solve()
{
	cin >> N;
	for (int i = 0 ; i <= 10 ; ++i)
		bruteForce(0, 9, i);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
