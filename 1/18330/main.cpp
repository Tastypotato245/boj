// https://www.acmicpc.net/problem/18330
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int usePlan, leftLiter, availableLiter;

void Solve()
{
    cin >> usePlan >> leftLiter;
    availableLiter = 60 + leftLiter;
    if(usePlan <= availableLiter) cout << usePlan * 1500;
    else cout << availableLiter * 1500 + (usePlan - availableLiter) * 3000;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
