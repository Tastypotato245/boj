// https://www.acmicpc.net/problem/22279
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
 int n; cin >> n;

  double totalQALY = 0.0;
  for (int i = 0; i < n; i++) {
    double q, y; cin >> q >> y;
    totalQALY += q * y;
  }

  cout.setf(ios::fixed); cout.precision(3);
  cout << totalQALY << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
