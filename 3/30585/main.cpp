// https://www.acmicpc.net/problem/30585
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void Solve()
{
    int h, w;
    cin >> h >> w;

    int cnt0 = 0, cnt1 = 0;
    string s;

    for (int i = 0; i < h; i++)
    {
        cin >> s;
        for (char c : s)
        {
            if (c == '0') cnt0++;
            else cnt1++;
        }
    }

    cout << min(cnt0, cnt1);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
