// https://www.acmicpc.net/problem/18409
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, cnt;
char c;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> c;
		if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c =='o')
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
