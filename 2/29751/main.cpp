// https://www.acmicpc.net/problem/29751
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

float W, H;

void Solve()
{
	cin >> W >> H;
	cout << fixed << setprecision(1) <<  W * H / 2 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
