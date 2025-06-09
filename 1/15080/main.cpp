// https://www.acmicpc.net/problem/15080
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int a[3], b[3], startTime, endTime;

void Solve()
{
    scanf("%d : %d : %d", &a[0], &a[1], &a[2]);
    scanf("%d : %d : %d", &b[0], &b[1], &b[2]);
    startTime = a[2] + a[1] * 60 + a[0] * 3600;
    endTime = b[2] + b[1] * 60 + b[0] * 3600;
    if (startTime > endTime)
		cout << 24 * 3600 - startTime + endTime;
    else
		cout << endTime - startTime;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
