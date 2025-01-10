// https://www.acmicpc.net/problem/2018
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	int l = 0, r = 0, cnt = 0, sum = 0;
	while (r <= N)
	{
		if (sum == N)
		{
			++cnt;
			++r;
			sum += r;
		}
		else if (sum < N)
		{
			++r;
			sum += r;
		}
		else
		{
			sum -= l;
			++l;
		}
	}
	cout << cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
