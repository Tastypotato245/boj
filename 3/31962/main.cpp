// https://www.acmicpc.net/problem/31962
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int X;
    cin >> N >> X;

    int ans = -1;

    for (int i = 0; i < N; i++)
    {
        int S, T;
        cin >> S >> T;

        if (S + T <= X)
            ans = max(ans, S);
    }

    cout << ans;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
