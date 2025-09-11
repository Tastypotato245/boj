// https://www.acmicpc.net/problem/25377
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int t, a, b, ans = 0x3f3f3f3f;

void Solve()
{
  cin >> t;
  while (t--)
  {
    cin >> a >> b;
    if (a <= b)
		ans = min(ans,b);
  }
  if (ans == 0x3f3f3f3f)
	  cout << -1;
  else
	  cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
