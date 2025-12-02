// https://www.acmicpc.net/problem/28635
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int m, a, b;
    cin >> m >> a >> b;

    int result;
    if (b >= a)
        result = b - a;
    else
        result = (m - a) + b;

    cout << result << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
