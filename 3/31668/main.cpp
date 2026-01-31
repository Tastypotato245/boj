// https://www.acmicpc.net/problem/31668
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int M, K;
    cin >> N;
    cin >> M;
    cin >> K;

    int lines = M / N;
    int result = lines * K;

    cout << result;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solve();
    return (0);
}
