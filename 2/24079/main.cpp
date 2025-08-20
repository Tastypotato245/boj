// https://www.acmicpc.net/problem/24079
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double x,y,z;

void Solve()
{
    cin >> x >> y >> z;
    if(x + y <= z + 0.5) cout << 1;
    else cout << 0;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
