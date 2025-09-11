// https://www.acmicpc.net/problem/19944
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;

void Solve()
{
	cin >> N >> M;

	if (M == 1 || M == 2)
		cout << "NEWBIE!";
	else if (M <= N)
		cout << "OLDBIE!";
	else
		cout << "TLE!";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
