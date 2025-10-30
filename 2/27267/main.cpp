// https://www.acmicpc.net/problem/27267
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int area1 = a * b, area2 = c * d;

  if (area1 > area2)
	  cout << "M\n";
  else if (area1 < area2)
	  cout << "P\n";
  else
	  cout << "E\n";

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
