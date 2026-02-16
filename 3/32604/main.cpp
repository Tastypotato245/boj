// https://www.acmicpc.net/problem/32604
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    int prevA = -1, prevB = -1;
    bool ok = true;

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a < prevA || b < prevB)
            ok = false;

        prevA = a;
        prevB = b;
    }

    cout << (ok ? "yes" : "no");
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
