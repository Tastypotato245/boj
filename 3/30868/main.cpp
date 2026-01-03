// https://www.acmicpc.net/problem/30868
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int five = n / 5;
        int rest = n % 5;

        for (int i = 0; i < five; i++)
            cout << "++++ ";

        for (int i = 0; i < rest; i++)
            cout << "|";

        cout << '\n';
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return (0);
}
