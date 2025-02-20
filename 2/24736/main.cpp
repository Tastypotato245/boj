// https://www.acmicpc.net/problem/24736
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;


void Solve()
{
	for (int i = 0 ; i < 2 ; ++i)
	{
		int t, f, s, aa, ab;
		cin >> t >> f >> s >> aa >> ab;
		int	points = t * 6 + f * 3 + s * 2 + aa * 1 + ab * 2;
		cout << points << " ";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
