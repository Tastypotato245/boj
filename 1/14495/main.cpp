// https://www.acmicpc.net/problem/14495
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
long long fb[117];

void Solve()
{
	cin >> N;

	fb[1] = 1;
	fb[2] = 1;
	for (int i = 3 ; i <= N ; ++i)
		fb[i] = fb[i - 1] + fb[i - 3];
	cout << fb[N] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
