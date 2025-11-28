// https://www.acmicpc.net/problem/30008
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N, K;

int getGrade(int P)
{
    if (0 <= P && P <= 4) return 1;
    if (P <= 11) return 2;
    if (P <= 23) return 3;
    if (P <= 40) return 4;
    if (P <= 60) return 5;
    if (P <= 77) return 6;
    if (P <= 89) return 7;
    if (P <= 96) return 8;
    return 9;
}

void Solve()
{
    cin >> N >> K;

    for (int i = 0; i < K; i++)
    {
        int G;
        cin >> G;

        int P = (G * 100) / N; // 백분율 계산
        cout << getGrade(P);

        if (i != K - 1) cout << " ";
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
