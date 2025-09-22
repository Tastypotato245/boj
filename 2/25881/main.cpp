// https://www.acmicpc.net/problem/25881
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int lowRate, highRate;
    cin >> lowRate >> highRate;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int usage;
        cin >> usage;

        int cost;
        if (usage <= 1000) {
            cost = usage * lowRate;
        } else {
            cost = 1000 * lowRate + (usage - 1000) * highRate;
        }

        cout << usage << " " << cost << "\n";
    }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
