// https://www.acmicpc.net/problem/28960
// github/Tastypotato245/boj

#include <iostream>

using namespace std;

void Solve() {
    int h, l, a, b;
    cin >> h >> l >> a >> b;

    bool ok = false;

    // Case 1: 폭=a, 늘어짐=b/2
    if (a <= l && b/2.0 <= h) ok = true;

    // Case 2: 폭=b, 늘어짐=a/2
    if (b <= l && a/2.0 <= h) ok = true;

    cout << (ok ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solve();
}
