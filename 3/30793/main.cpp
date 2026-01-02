// https://www.acmicpc.net/problem/30793
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int p, r;
    cin >> p >> r;

    double v = (double)p / r;

    if (v < 0.2)
        cout << "weak";
    else if (v < 0.4)
        cout << "normal";
    else if (v < 0.6)
        cout << "strong";
    else
        cout << "very strong";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
