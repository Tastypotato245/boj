// https://www.acmicpc.net/problem/13909
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long N;

void Solve()
{
	cin >> N;
	
	int i;
	int cnt = 0;
	for (i = 3 ; N > 0 ; i += 2)
	{
		N -= i;
		++cnt;
	}
	cout << cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
