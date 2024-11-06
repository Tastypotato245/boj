// https://www.acmicpc.net/problem/1110
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	
	int target = N;
	int now = N % 10 * 10 + (N / 10 + N % 10) % 10;
	int cnt = 1;
	while (target != now)
	{
		now = now % 10 * 10 + (now / 10 + now % 10) % 10;
		++cnt;
	}
	cout << cnt << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
