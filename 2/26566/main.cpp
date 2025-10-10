// https://www.acmicpc.net/problem/26556
// github/Tastypotato245/boj

#include <iostream>
#include <bits/stdc++.h>

#define PI 3.14159265358979

using namespace std;

int	N;

void Solve()
{
  int n; cin >> n;

  for (int i = 0; i < n; i++)
  {
    int a1, p1, r1, p2; cin >> a1 >> p1 >> r1 >> p2;

    double sliced = (double)a1 / p1,
           whole = (double)(PI * pow(r1, 2)) / p2;
    if (sliced > whole)
		cout << "Slice of pizza\n";
    else
		cout << "Whole pizza\n";
  }

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
