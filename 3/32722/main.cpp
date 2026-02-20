// https://www.acmicpc.net/problem/32722
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    bool first  = (a == 1 || a == 3);
    bool second = (b == 6 || b == 8);
    bool third  = (c == 2 || c == 5);

    if (first && second && third)
        cout << "JAH";
    else
        cout << "EI";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return (0);
}
