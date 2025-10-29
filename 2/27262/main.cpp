// https://www.acmicpc.net/problem/27262
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
  int n, k, a, b;
  cin >> n >> k >> a >> b;

  int elevTime = abs(1 - k) * b + (n - 1) * b;
  int stairTime = (n - 1) * a;

  cout << elevTime << " " << stairTime << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
