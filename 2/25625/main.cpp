// https://www.acmicpc.net/problem/25625
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	x, y;

void Solve()
{
  cin >> x >> y;

  if(x > y)
    cout << x + y;
  else
    cout << y - x;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
