// https://www.acmicpc.net/problem/32025
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int H, W;
    cin >> H >> W;

    int radius = min(H, W) * 100 / 2;
    cout << radius;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
