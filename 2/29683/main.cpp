// https://www.acmicpc.net/problem/29683
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;

void Solve()
{
    int A;
    cin >> N >> A;

    long long total = 0;
    for (int i = 0; i < N; i++) {
        int cost;
        cin >> cost;
        total += cost / A;   // 티켓 개수 누적
    }

    cout << total << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    Solve();
    return 0;
}
