// https://www.acmicpc.net/problem/28248
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int P, C;
    cin >> P >> C;

    int score = P * 50 - C * 10;
    if (P > C) score += 500;

    cout << score << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
