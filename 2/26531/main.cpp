// https://www.acmicpc.net/problem/26531
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int a, b, c;
    scanf("%d + %d = %d", &a, &b, &c);

    if (a + b == c)
		cout << "YES";
    else
		cout << "NO";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
