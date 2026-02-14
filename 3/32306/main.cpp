// https://www.acmicpc.net/problem/32306
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int a1, a2, a3;
    int b1, b2, b3;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;

    int score1 = a1 + 2 * a2 + 3 * a3;
    int score2 = b1 + 2 * b2 + 3 * b3;

    if (score1 > score2)
        cout << 1;
    else if (score2 > score1)
        cout << 2;
    else
        cout << 0;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return (0);
}
