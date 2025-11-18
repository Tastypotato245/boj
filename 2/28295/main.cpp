// https://www.acmicpc.net/problem/28295
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int dir = 0; // 0: N, 1: E, 2: S, 3: W
    for (int i = 0; i < 10; i++) {
        cin >> N;
        if (N == 1) dir = (dir + 1) % 4;
        else if (N == 2) dir = (dir + 2) % 4;
        else if (N == 3) dir = (dir + 3) % 4;
    }

    if (dir == 0) cout << "N\n";
    else if (dir == 1) cout << "E\n";
    else if (dir == 2) cout << "S\n";
    else cout << "W\n";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    Solve();
    return 0;
}
