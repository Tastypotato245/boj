// https://www.acmicpc.net/problem/29546
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N;

void Solve()
{
    cin >> N;
    vector<string> files(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> files[i];
    }

    int M;
    cin >> M;

    while (M--) {
        int l, r;
        cin >> l >> r;

        // l부터 r까지 출력
        for (int i = l; i <= r; i++) {
            cout << files[i] << "\n";
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    Solve();
    return 0;
}
