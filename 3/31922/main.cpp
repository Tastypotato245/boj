// https://www.acmicpc.net/problem/31922
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int A, P, C;
    cin >> A >> P >> C;

    cout << max(A + C, P);
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
