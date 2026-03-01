// https://www.acmicpc.net/problem/33166
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int P, Q, A, B;
    cin >> P >> Q;
    cin >> A >> B;

    int result;

    if (Q <= P)
        result = Q * A;
    else
        result = P * A + (Q - P) * B;

    cout << result;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
