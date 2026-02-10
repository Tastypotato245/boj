// https://www.acmicpc.net/problem/32089
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    while (true)
    {
        cin >> N;
        if (N == 0)
            return;

        long long a[1005] = {0};

        for (int i = 0; i < N; i++)
            cin >> a[i];

        long long ans = 0;

        for (int i = 0; i < N; i++)
        {
            long long cur = a[i];
            if (i >= 1) cur += a[i - 1];
            if (i >= 2) cur += a[i - 2];

            ans = max(ans, cur);
        }

        cout << ans << '\n';
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
