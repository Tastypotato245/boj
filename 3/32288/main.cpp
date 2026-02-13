// https://www.acmicpc.net/problem/32288
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

    for (char &c : S)
    {
        if (c == 'l')
            c = 'L';
        else if (c == 'I')
            c = 'i';
    }

    cout << S;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return (0);
}
