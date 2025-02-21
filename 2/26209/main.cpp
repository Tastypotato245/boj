// https://www.acmicpc.net/problem/26209
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
bool isF;

void Solve()
{
	for (int i = 0 ; i < 8 ; ++i)
	{
		cin >> N;
		if (N == 9)
			isF = true;
	}
	cout << (isF ? "F" : "S");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
