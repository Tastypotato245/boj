// https://www.acmicpc.net/problem/28352
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;


ll factorial(int n) {
  ll res = 1;
  for(int i = 1; i <= n; i++)
    res *= i;
  return res;
}

void Solve()
{
  int n; cin >> n;

  ll secPerWeek = 7 * 24 * 60 * 60;
  ll factorialN = factorial(n);

  cout << factorialN / secPerWeek << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
