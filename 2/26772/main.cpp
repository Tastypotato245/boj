// https://www.acmicpc.net/problem/26772
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

int	N;

void Solve()
{
  const string heart[9] = {
    " @@@   @@@ ",
    "@   @ @   @",
    "@    @    @",
    "@         @",
    " @       @ ",
    "  @     @  ",
    "   @   @   ",
    "    @ @    ",
    "     @     "
  };

  int n; cin >> n;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < n; j++) {
      cout << heart[i];
      if (j != n - 1) cout << " ";
    }
    cout << "\n";
  }

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
