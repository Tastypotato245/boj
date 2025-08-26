// https://www.acmicpc.net/problem/24183
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double c4, a3, a4, envelop, poster, sheet;

void Solve()
{
  cin >> c4 >> a3 >> a4;
  envelop = 229 * 324 * c4 * 2;
  poster = 297 * 420 * a3 * 2;
  sheet = 210 * 297 * a4;
  
  printf("%.6f", (envelop + poster + sheet) * 0.000001);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
