// https://www.acmicpc.net/problem/17388
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	S, K, H;

void Solve()
{
	cin >> S >> K >> H;
	if (S + K + H >= 100)
		cout << "OK";
	else
	{
		if (S < K && S < H)
			cout << "Soongsil";
		else if (K < S && K < H)
			cout << "Korea";
		if (H < S && H < K)
			cout << "Hanyang";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
