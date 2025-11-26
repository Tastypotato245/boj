// https://www.acmicpc.net/problem/29736
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int A, B;
    cin >> A >> B;

    int K, X;
    cin >> K >> X;

    // 친구가 될 수 있는 문제 수 범위: [K-X, K+X]
    int L = K - X;
    int R = K + X;

    // A~B 범위와 L~R 범위의 교집합 계산
    int left = max(A, L);
    int right = min(B, R);

    if (left > right)
        cout << "IMPOSSIBLE\n";
    else
        cout << right - left + 1 << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
