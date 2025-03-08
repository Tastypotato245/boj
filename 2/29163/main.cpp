// https://www.acmicpc.net/problem/29163
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, cnt;

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		int tmp;
		cin >> tmp;

		cnt += (tmp % 2 == 0 ? 1 : -1);
	}
	cout << (cnt > 0 ? "Happy" : "Sad");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
