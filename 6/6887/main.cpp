// https://www.acmicpc.net/problem/6887
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	cout << "The largest square has side length " << (int)sqrt(N) << ".";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
