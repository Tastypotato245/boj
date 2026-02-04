// https://www.acmicpc.net/problem/31822
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    string base;
    cin >> base;

    string key = base.substr(0, 5);

    cin >> N;

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if (s.substr(0, 5) == key)
            cnt++;
    }

    cout << cnt;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
