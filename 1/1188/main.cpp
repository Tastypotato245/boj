// https://www.acmicpc.net/problem/1188
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M, maxi, answer;

void Solve()
{
	cin >> N >> M;

	maxi = N * M;
	for (int i = 0 ; i <= maxi ; i += N)
		if (i % M != 0)
			++answer;
	cout << answer << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
