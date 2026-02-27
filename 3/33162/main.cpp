// https://www.acmicpc.net/problem/33162
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	int result = 0;

	// A: +3m (odd turn)
	// B: -2m (even turn)
	for (int i = 1; i <= N; ++i)
	{
		if (i % 2 == 1)
			result += 3;
		else
			result -= 2;
	}

	cout << result;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
