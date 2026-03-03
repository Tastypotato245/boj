// https://www.acmicpc.net/problem/33191
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int b;
    cin >> b;

    int watermelon, pomegranates, nuts;
    cin >> watermelon;
    cin >> pomegranates;
    cin >> nuts;

    if (b >= watermelon)
        cout << "Watermelon";
    else if (b >= pomegranates)
        cout << "Pomegranates";
    else if (b >= nuts)
        cout << "Nuts";
    else
        cout << "Nothing";
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Solve();
    return (0);
}
