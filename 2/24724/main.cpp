// https://www.acmicpc.net/problem/24724
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int t, n, l1, l2, a, b;

void Solve()
{
  cin >> t;
  for(int i = 1 ; i <= t; i++)
  {
    cin >> n >> l1 >> l2;
    for(int j = 0; j < n; j++)
		cin >> a >> b;
    cout << "Material Management " << i << '\n';
    cout << "Classification ---- End!\n";
  }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
