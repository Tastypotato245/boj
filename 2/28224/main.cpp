// https://www.acmicpc.net/problem/28224
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
  int totalDays, priceInit; cin >> totalDays >> priceInit;

  for (int i = 1; i < totalDays; i++)
  {
    int priceDaily; cin >> priceDaily;
    priceInit += priceDaily;
  }

  cout << priceInit << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
