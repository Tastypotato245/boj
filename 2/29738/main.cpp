// https://www.acmicpc.net/problem/29738
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        cin >> N;

        string result;
        if (N > 4500) result = "Round 1";
        else if (N > 1000) result = "Round 2";
        else if (N > 25) result = "Round 3";
        else result = "World Finals";

        cout << "Case #" << tc << ": " << result << "\n";
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
