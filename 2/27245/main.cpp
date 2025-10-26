// https://www.acmicpc.net/problem/27245
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
  int w, l, h; cin >> w >> l >> h;

  int minDim = min(w, l),
      maxDim = max(w, l);

  if ((minDim >= 2 * h) && (maxDim <= 2 * minDim))
    cout << "good" << "\n";
  else
    cout << "bad" << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
