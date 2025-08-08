// https://www.acmicpc.net/problem/21633
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double k, ans;

void Solve()
{
    cin >> k;
    ans = 25.0 + k * 0.01;

    if(ans <= 100)
		printf("100.00");
    else if(ans >= 2000)
		printf("2000.00");
    else
		printf("%.2f", ans);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
