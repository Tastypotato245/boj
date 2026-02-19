// https://www.acmicpc.net/problem/32684
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int c1, p1, m1, s1, sa1, j1; // 초나라
    int c2, p2, m2, s2, sa2, j2; // 한나라

    cin >> c1 >> p1 >> m1 >> s1 >> sa1 >> j1;
    cin >> c2 >> p2 >> m2 >> s2 >> sa2 >> j2;

    int score1 = 13*c1 + 7*p1 + 5*m1 + 3*s1 + 3*sa1 + 2*j1;
    double score2 = 13*c2 + 7*p2 + 5*m2 + 3*s2 + 3*sa2 + 2*j2 + 1.5;

    if (score1 > score2)
        cout << "cocjr0208";
    else
        cout << "ekwoo";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
