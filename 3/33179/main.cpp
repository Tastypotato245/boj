// https://www.acmicpc.net/problem/33179
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    int totalPages = 0;
    int oddCount = 0;

    for (int i = 0; i < N; i++)
    {
        int pages;
        cin >> pages;

        totalPages += pages;
        if (pages % 2 == 1)
            oddCount++;
    }

    totalPages += oddCount; // 홀수 챕터마다 빈 페이지 추가

    cout << (totalPages + 1) / 2; // 올림 나눗셈
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
