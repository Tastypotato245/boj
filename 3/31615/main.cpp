// https://www.acmicpc.net/problem/31615
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int A, B;
    cin >> A >> B;

    int sum = A + B;
    int digits = 0;

    while (sum > 0)
    {
        digits++;
        sum /= 10;
    }

    cout << digits;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
