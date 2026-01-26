// https://www.acmicpc.net/problem/31612
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

    int sum = 0;
    for (char c : S)
    {
        if (c == 'j' || c == 'i')
            sum += 2;
        else if (c == 'o')
            sum += 1;
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
