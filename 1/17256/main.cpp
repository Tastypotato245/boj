// https://www.acmicpc.net/problem/17256
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a_x, a_y, a_z;
int	c_x, c_y, c_z;

void Solve()
{
	cin >> a_x >> a_y >> a_z;
	cin >> c_x >> c_y >> c_z;
	cout << c_x - a_z << " " << c_y / a_y << " " << c_z - a_x ;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
