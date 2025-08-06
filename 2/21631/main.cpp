// https://www.acmicpc.net/problem/21613
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long white, black;

void Solve()
{
    cin >> white >> black;

    if (white >= black)
		cout << black;
    else
		cout << white + 1;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
