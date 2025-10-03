// https://www.acmicpc.net/problem/26530
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

void Solve()
{
  int n; cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;

    double totalPrice = 0.0;
    for (int j = 0; j < x; j++)
	{
      string item; int quantity; double price;
      cin >> item >> quantity >> price;

      totalPrice += quantity * price;
    }

    cout.setf(ios::fixed); cout.precision(2);
    cout << "$" << totalPrice << "\n";
  }

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
