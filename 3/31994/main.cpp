// https://www.acmicpc.net/problem/31994
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    string name, answer;
    int cnt, maxCnt = -1;

    for (int i = 0; i < 7; i++)
    {
        cin >> name >> cnt;
        if (cnt > maxCnt)
        {
            maxCnt = cnt;
            answer = name;
        }
    }

    cout << answer;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
