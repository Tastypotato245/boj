// https://www.acmicpc.net/problem/6888
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	X, Y;

void Solve()
{
	cin >> X >> Y;

	while (X <= Y)
	{
		cout << "All positions change in year " << X << "\n";
		X += 60;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
