// https://www.acmicpc.net/problem/32651
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    cin >> N;

    if (N <= 100000 && N % 2024 == 0)
        cout << "Yes";
    else
        cout << "No";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return (0);
}
