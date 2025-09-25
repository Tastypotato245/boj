// https://www.acmicpc.net/problem/25991
// github/Tastypotato245/boj

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
    int n;
    cin >> n;

    long double total_volume = 0.0;
    for (int i = 0; i < n; i++) {
        long double c;
        cin >> c;
        total_volume += c * c * c;
    }

    long double result = cbrtl(total_volume);
    cout << fixed << setprecision(9) << result << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
