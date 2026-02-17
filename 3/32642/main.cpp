// https://www.acmicpc.net/problem/32642
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    long long cur = 0;   // 현재 분노
    long long sum = 0;   // 분노의 총합

    for (int i = 0; i < N; i++)
    {
        int weather;
        cin >> weather;

        if (weather == 1)
            cur += 1;
        else
            cur -= 1;

        sum += cur;
    }

    cout << sum;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return (0);
}
