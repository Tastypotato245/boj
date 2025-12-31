// https://www.acmicpc.net/problem/30658
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;

void Solve()
{
    while (true)
    {
        cin >> N;
        if (N == 0) return;

        vector<int> teams(N);
        for (int i = 0; i < N; i++)
            cin >> teams[i];

        reverse(teams.begin(), teams.end());

        for (int x : teams)
            cout << x << '\n';

        cout << "0\n";
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
