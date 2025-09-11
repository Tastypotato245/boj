// https://www.acmicpc.net/problem/
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int r, c, ans;
char ori[101][101];

void Solve()
{
  cin >> r >> c;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> ori[i][j];
    }
  }
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      char x;
      cin >> x;
      if(ori[i][j] == x) ans++;
    }
  }
  cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
