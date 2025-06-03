// https://www.acmicpc.net/problem/14652
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M, K;

void Solve()
{
	cin >> N >> M >> K;

	cout << K / M << " " << K % M;

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
