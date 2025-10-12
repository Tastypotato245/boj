// https://www.acmicpc.net/problem/26592
// github/Tastypotato245/boj

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int	N;

void Solve()
{
  int n; cin >> n;

  cout.setf(ios::fixed); cout.precision(2);

  for (int t = 0; t < n; t++)
  {
    double a, b; cin >> a >> b;

    double height = (2 * a) / b;
    cout << "The height of the triangle is " << height << " units\n";
  }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
