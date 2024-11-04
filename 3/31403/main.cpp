// https://www.acmicpc.net/problem/31403
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	A, B, C;

void Solve()
{
	cin >> A >> B >> C;
	cout << A + B - C << "\n";
	int tmp = B;
	int ten = 1;
	while (tmp != 0)
	{
		tmp /= 10;
		ten *= 10;
	}
	cout << A * ten + B - C << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
