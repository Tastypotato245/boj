// https://www.acmicpc.net/problem/30468
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int STR, DEX, INT, LUK;
    cin >> STR >> DEX >> INT >> LUK >> N;

    int sum = STR + DEX + INT + LUK;
    int target = 4 * N;

    cout << max(0, target - sum);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
