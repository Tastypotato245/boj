// https://www.acmicpc.net/problem/28519
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

void Solve()
{
  ll n, m;
  cin >> n >> m;

  if (n > m)
	  swap(n, m);

  cout << min(n + m, n + n + 1) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
