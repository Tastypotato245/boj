// https://www.acmicpc.net/problem/29267
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;

void Solve()
{
    int k;
    cin >> N >> k;

    int ammo = 0;
    int saved = 0;
    bool hasSave = false;

    for (int i = 0; i < N; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "ammo") {
            ammo += k;
        }
        else if (cmd == "shoot") {
            ammo -= 1; // 문제에서 탄환 없는 상태에서는 shoot 안 한다고 보장
        }
        else if (cmd == "save") {
            saved = ammo;
            hasSave = true;
        }
        else if (cmd == "load") {
            if (hasSave) ammo = saved;
            else ammo = 0;
        }

        cout << ammo << "\n";
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
