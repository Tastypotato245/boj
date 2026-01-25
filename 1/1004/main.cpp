// https://www.acmicpc.net/problem/1004
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int T;

bool isInside(int x, int y, int cx, int cy, int r)
{
    int dx = x - cx;
    int dy = y - cy;
    return dx * dx + dy * dy < r * r;
}

void Solve()
{
    cin >> T;
    while (T--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int n;
        cin >> n;

        int answer = 0;

        for (int i = 0; i < n; i++)
        {
            int cx, cy, r;
            cin >> cx >> cy >> r;

            bool startInside = isInside(x1, y1, cx, cy, r);
            bool endInside   = isInside(x2, y2, cx, cy, r);

            if (startInside != endInside)
                answer++;
        }

        cout << answer << '\n';
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
