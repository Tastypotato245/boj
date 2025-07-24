// https://www.acmicpc.net/problem/20233
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int a, x, b, y, T, option1, option2;

void Solve()
{
    cin >> a >> x >> b >> y >> T;

    if (T > 30)
		option1 = a + (T - 30) * x * 21;
    else
		option1 = a;

    if (T > 45)
		option2 = b + (T - 45) * y * 21;
    else
		option2 = b;
    
    cout << option1 << ' ' << option2;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
