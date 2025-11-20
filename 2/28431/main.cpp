// https://www.acmicpc.net/problem/28431
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int cnt[10];

void Solve()
{
	for (int k = 0; k < 5; k++)
	{
		int x; cin >> x;
		cnt[x]++;
	}
	for (int i = 0; i < 10; i++)
		if (cnt[i] & 1) cout << i;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
