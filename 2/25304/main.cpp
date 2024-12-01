// https://www.acmicpc.net/problem/25304
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	X, N;

void Solve()
{
	cin >> X;
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int a, b;
		cin >> a >> b;
		X -= a * b;
	}
	if (X == 0)
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
