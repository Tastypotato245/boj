// https://www.acmicpc.net/problem/29790
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N, U, L;

void Solve()
{
    cin >> N >> U >> L;

    bool baekjoon_ok = (N >= 1000);
    bool maple_ok = (U >= 8000 || L >= 260);

    if (baekjoon_ok && maple_ok)
        cout << "Very Good";
    else if (baekjoon_ok)
        cout << "Good";
    else
        cout << "Bad";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
