// https://www.acmicpc.net/problem/34813
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string S;

void Solve()
{
    cin >> S;

    char c = S[0];

    if (c == 'F')
        cout << "Foundation";
    else if (c == 'C')
        cout << "Claves";
    else if (c == 'V')
        cout << "Veritas";
    else
        cout << "Exploration";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
