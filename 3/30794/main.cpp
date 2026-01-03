// https://www.acmicpc.net/problem/30794
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;

void Solve()
{
    int lv;
    string judge;
    cin >> lv >> judge;

    if (judge == "miss")
        cout << 0;
    else if (judge == "bad")
        cout << 200 * lv;
    else if (judge == "cool")
        cout << 400 * lv;
    else if (judge == "great")
        cout << 600 * lv;
    else if (judge == "perfect")
        cout << 1000 * lv; // 1연팩
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return (0);
}
