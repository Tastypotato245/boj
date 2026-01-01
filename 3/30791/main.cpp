// https://www.acmicpc.net/problem/30791
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int votes[5];
    for (int i = 0; i < 5; i++)
        cin >> votes[i];

    int vote16 = votes[0];
    int answer = 0;

    for (int i = 1; i < 5; i++)
    {
        if (vote16 - votes[i] <= 1000)
            answer++;
    }

    cout << answer;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return (0);
}
