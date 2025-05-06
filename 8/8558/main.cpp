// https://www.acmicpc.net/problem/8558
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	if (N == 0)
		cout << 1;
	else if (N == 1 || N == 2 || N == 4)
		cout << N;
	else if (N == 3)
		cout << 6;
	else
		cout << 0;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
