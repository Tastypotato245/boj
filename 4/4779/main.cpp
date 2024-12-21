// https://www.acmicpc.net/problem/4779
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;

bool promise(int i, int now)
{
	if (now == 1)
		return true;
	if (now == 3 && (i == 0 || i == 2))
		return true;

	if (i < now / 3)
		return promise(i, now / 3);
	else if (i >= now * 2 / 3)
		return promise(i - (now * 2 / 3), now / 3);
	else
		return false;
}

void Solve()
{
	while (cin >> N)
	{
		for (int i = 0 ; i < pow(3, N) ; ++i)
			cout << (promise(i, pow(3, N)) ? '-' : ' ');
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
