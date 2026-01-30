// https://www.acmicpc.net/problem/31656
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    string S;
    getline(cin, S);

    string result;
    result.push_back(S[0]);

    for (int i = 1; i < (int)S.size(); i++)
    {
        if (S[i] != S[i - 1])
            result.push_back(S[i]);
    }

    cout << result;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
