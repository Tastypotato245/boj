// https://www.acmicpc.net/problem/34849
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    if ((long long)N * N <= 100000000LL)
        cout << "Accepted";
    else
        cout << "Time limit exceeded";
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
