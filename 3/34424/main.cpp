// https://www.acmicpc.net/problem/34424
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int n, x;
    cin >> n >> x;

    int farthest = (n - 1) * x;
    cout << farthest;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
