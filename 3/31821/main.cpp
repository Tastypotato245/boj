// https://www.acmicpc.net/problem/31821
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    int price[11];
    for (int i = 1; i <= N; i++)
        cin >> price[i];

    int M;
    cin >> M;

    int sum = 0;
    for (int i = 0; i < M; i++)
    {
        int b;
        cin >> b;
        sum += price[b];
    }

    cout << sum;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
