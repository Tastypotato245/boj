// https://www.acmicpc.net/problem/28808
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int n, m;
    cin >> n >> m;

    int solved = 0;

    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;

        // 첫 '+'가 있으면 그 문제는 해결된 것
        bool ok = false;
        for (int j = 0; j < m; j++) {
            if (row[j] == '+') {
                ok = true;
                break;
            }
            if (row[j] == '.') break; // 이후는 모두 '.'이므로 더 볼 필요 없음
        }

        if (ok) solved++;
    }

    cout << solved << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
