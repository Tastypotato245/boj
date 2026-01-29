// https://www.acmicpc.net/problem/31636
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

    int cnt = 0;
    for (char c : S)
    {
        if (c == 'o')
        {
            cnt++;
            if (cnt >= 3)
            {
                cout << "Yes";
                return;
            }
        }
        else
        {
            cnt = 0;
        }
    }

    cout << "No";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
