// https://www.acmicpc.net/problem/27918
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void Solve()
{
  int n, a = 0, b = 0;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    if (c == 'D')
      a++;
    else
      b++;
    if (abs(a - b) > 1)
      break;
  }
  cout << a << ":" << b;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
