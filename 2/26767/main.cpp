// https://www.acmicpc.net/problem/26767
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
  int n; cin >> n;

  for (int i = 1; i <= n; i++)
  {
    if (i % 7 == 0 && i % 11 == 0)
		cout << "Wiwat!\n";
    else if (i % 7 == 0)
		cout << "Hurra!\n";
    else if (i % 11 == 0)
		cout << "Super!\n";
    else
		cout << i << "\n";
  }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
