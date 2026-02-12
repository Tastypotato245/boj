// https://www.acmicpc.net/problem/32278
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    long long x;
    cin >> x;

    if (x >= -32768 && x <= 32767)
        cout << "short";
    else if (x >= -2147483648LL && x <= 2147483647LL)
        cout << "int";
    else
        cout << "long long";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
