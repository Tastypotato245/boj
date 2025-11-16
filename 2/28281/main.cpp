// https://www.acmicpc.net/problem/28281
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void Solve()
{
  int n, x; cin >> n >> x;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  ll ans = 1e18;
  for (int i = 0; i < n - 1; i++)
    ans = min(ans, 1LL * x * (v[i] + v[i + 1]));

  cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
