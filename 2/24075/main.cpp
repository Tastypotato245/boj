// https://www.acmicpc.net/problem/24075
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int a, b, sum, sub;

void Solve()
{
    cin >> a >> b;
    sum = a + b;
    sub = a - b;
    cout << max(sum, sub) << '\n' << min(sum, sub);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
