// https://www.acmicpc.net/problem/27257
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

int	N;

void Solve()
{
  string numStr;
  cin >> numStr;

  int ans = 0;
  for (size_t i = 0; i < numStr.length(); i++)
    if (numStr[i] == '0') ans++;

  for (size_t i = numStr.length() - 1; i != 0; i--)
  {
    if (numStr[i] == '0')
		ans--;
    else
		break ;
  }

  cout << ans << "\n";

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
