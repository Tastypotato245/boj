// https://www.acmicpc.net/problem/25628
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int a, b;

void Solve()
{
  cin >> a >> b;
  cout << min(a / 2, b);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
