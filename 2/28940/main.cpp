// https://www.acmicpc.net/problem/28940
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int w, h;
    cin >> w >> h;

    int n, a, b;
    cin >> n >> a >> b;

    int perRow = w / a;
    int perCol = h / b;

    if (perRow == 0 || perCol == 0) {
        cout << -1 << "\n";
        return;
    }

    int perPage = perRow * perCol;

    int pages = (n + perPage - 1) / perPage;

    cout << pages << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
