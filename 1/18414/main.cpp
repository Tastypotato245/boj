// https://www.acmicpc.net/problem/18414
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int x, l, r, minDiff = 2147483647, ans = 2147483647;

void Solve()
{
    cin >> x >> l >> r;
    for(int i = l; i <= r; i++){
        int diff = abs(i - x);
        if(minDiff > diff) {
            ans = i;
            minDiff = diff;
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
