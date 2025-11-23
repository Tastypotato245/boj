// https://www.acmicpc.net/problem/28490
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
  int n;
  cin >> n;

  int maxArea = 0;
  for (int i = 0; i < n; i++)
  {
    int h, w; cin >> h >> w;
    maxArea = max(maxArea, h * w);
  }

  cout << maxArea << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
