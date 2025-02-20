// https://www.acmicpc.net/problem/32775
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	S, F;

void Solve()
{
	cin >> S >> F;
	cout << (F < S ? "flight" : "high speed rail");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
