// https://www.acmicpc.net/problem/28648
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    int t, l;
    int answer = 1e9;  // 충분히 큰 값으로 초기화

    for (int i = 0; i < N; i++) {
        cin >> t >> l;
        answer = min(answer, t + l);
    }

    cout << answer << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
