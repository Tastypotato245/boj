// https://www.acmicpc.net/problem/31616
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    string S;
    cin >> S;

    char first = S[0];
    for (int i = 1; i < N; i++)
    {
        if (S[i] != first)
        {
            cout << "No";
            return;
        }
    }

    cout << "Yes";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
