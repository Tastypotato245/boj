// https://www.acmicpc.net/problem/33651
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;

void Solve()
{
    string s;
    cin >> s;

    string origin = "UAPC";
    int idx = 0;

    for (char c : origin)
    {
        if (idx < s.size() && s[idx] == c)
            idx++;
        else
            cout << c;
    }
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
