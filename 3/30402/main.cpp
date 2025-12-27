// https://www.acmicpc.net/problem/30402
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N; // 사용하지 않지만 양식 유지

void Solve()
{
    string s;
    bool hasW = false, hasB = false, hasG = false;

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cin >> s;
            if (s == "w") hasW = true;
            else if (s == "b") hasB = true;
            else if (s == "g") hasG = true;
        }
    }

    if (hasW) cout << "chunbae";
    else if (hasB) cout << "nabi";
    else if (hasG) cout << "yeongcheol";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
