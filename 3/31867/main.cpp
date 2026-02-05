// https://www.acmicpc.net/problem/31867
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    string K;
    cin >> K;

    int even = 0, odd = 0;

    for (char c : K)
    {
        int digit = c - '0';
        if (digit % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even > odd)
        cout << 0;
    else if (odd > even)
        cout << 1;
    else
        cout << -1;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
