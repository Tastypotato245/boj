// https://www.acmicpc.net/problem/33571
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;

void Solve()
{
    string S;
    getline(cin, S);

    int count = 0;

    for (char c : S)
    {
        if (c == 'B')
            count += 2;
        else if (c == 'A' || c == 'D' || c == 'O' || c == 'P' || c == 'Q' || c == 'R' ||
                 c == 'a' || c == 'b' || c == 'd' || c == 'e' || c == 'g' ||
                 c == 'o' || c == 'p' || c == 'q' || c == '@')
            count += 1;
    }

    cout << count;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
